#include "Giraffe.hpp"
#include "Util/GameObject.hpp"
#include "Util/Image.hpp"
#include "Util/Text.hpp"
#include "Util/Time.hpp"
#include "Util/Transform.hpp"
#include "config.hpp"
#include "Util/Input.hpp"
void GiraffeText::Update(const Util::Transform &transform) {
    auto &pos = m_Transform.translation;
    auto &scale = m_Transform.scale;
    auto &rotation = m_Transform.rotation;

    pos += transform.translation;
    rotation += transform.rotation;
    scale = transform.scale;

    m_Drawable->Draw(m_Transform, m_ZIndex);
}

void GiraffeText::Start() {
    this->SetDrawable(std::make_unique<Util::Text>(m_Font, m_Size, m_Text));
}

void Giraffe::Start() {
    
}


void Giraffe::Update(const Util::Transform &transform) {
    glm::vec2 dir = {dirx, diry};
    
    auto &pos = m_Transform.translation;
    auto &scale = m_Transform.scale;
    auto &rotation = m_Transform.rotation;
    
    /*if (pos.y > WINDOW_HEIGHT/2 || pos.y + WINDOW_HEIGHT/2 < 0) {
        dir.y *= -1;
    }
    if (pos.x > WINDOW_WIDTH/2 || pos.x + WINDOW_WIDTH/2 < 0) {
        dir.x *= -1;
    }*/
    auto mouse = Util::Input::GetCursorPosition();
    
    dir.y = mouse.y - pos.y;
    dir.x = mouse.x - pos.x;

    auto delta = static_cast<float>(Util::Time::GetDeltaTime());
    Util::Transform deltaTransform{
        dir * delta * 200.0F,   //移動、速度(向量)
        0 * delta,  //旋轉
        glm::vec2(0.1,0.1 )}; //比例(縮放)

    pos += deltaTransform.translation;
    rotation += deltaTransform.rotation;
    scale = deltaTransform.scale;


    m_Drawable->Draw(m_Transform, m_ZIndex);
    for (auto &child : m_Children) {
        child->Update(deltaTransform);
    }

    //LOG_DEBUG("GIRA: x: {}, y: {}", pos.x, pos.y);
}
