#include "App.hpp"
#include "MouseHelper.hpp"
#include "Util/Image.hpp"
#include "Util/Input.hpp"
#include "Util/Keycode.hpp"
#include "Util/Logger.hpp"
#include "Util/Time.hpp"
#include "Util/SFX.hpp"


void App::Start() {
    timer = 0;
    LOG_TRACE("Start");
    m_Giraffe->SetDrawable(
        std::make_unique<Util::Image>("../assets/sprites/hand.png"));
    m_Giraffe->SetZIndex(5);
    m_Giraffe->Start();
    background->SetDrawable(
        std::make_unique<Util::Image>("../assets/sprites/0.jpg"));
    background->SetLists(
        {"../assets/sprites/kid.gif"
         }
    );
    background->SetZIndex(0);
    background->Start();
    std::shared_ptr<Girl> token = std::make_shared<Girl>();
    Ch_list.push_back(token);
    m_CurrentState = State::UPDATE;
}

void App::Update() {
    auto cursorPos = Util::Input::GetCursorPosition();
    if (Util::Input::IsLButtonPressed()) {
        Ch_list[0]->AddGirl();
    }
    if (Util::Input::IsRButtonPressed()) {
        
        LOG_DEBUG("Right button pressed");
    }
    if (Util::Input::IsMButtonPressed()) {
        LOG_DEBUG("Middle button pressed");
    }
    if (Util::Input::IfScroll()) {
        auto delta = Util::Input::GetScrollDistance();
        LOG_DEBUG("Scrolling: x: {}, y: {}", delta.x, delta.y);
    }
    if (Util::Input::IsMouseMoving()) {
      // LOG_DEBUG("Mouse moving! x:{}, y{}", cursorPos.x, cursorPos.y);
    }
    if (Util::Input::IsKeyPressed(Util::Keycode::ESCAPE) ||
        Util::Input::IfExit()) {
        m_CurrentState = State::END;
    }

    if (Util::Input::IsKeyPressed(Util::Keycode::A)) {
        LOG_DEBUG("A");
    }
    if (Util::Input::IsKeyPressed(Util::Keycode::B)) {
        LOG_DEBUG("B");
        Util::Input::SetCursorPosition({0.0F, 0.0F});
    }
    if (Util::Input::IsKeyPressed(Util::Keycode::W)) {
        LOG_DEBUG("w");
    }
    if (Util::Input::IsKeyPressed(Util::Keycode::S)) {
        LOG_DEBUG("S");
    }
    if (Util::Input::IsKeyPressed(Util::Keycode::D)) {
        LOG_DEBUG("D");
    }
    m_Giraffe->Update();
    background->Update();
    for(unsigned i=0;i<Ch_list.size();i++){
        Ch_list[i]->Update();
    }
}

void App::End() { // NOLINT(this method will mutate members in the future)
    LOG_TRACE("End");
}
