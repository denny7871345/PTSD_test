#include "Background.hpp"
#include "Util/GameObject.hpp"
#include "Util/Image.hpp"
#include "Util/Text.hpp"
#include "Util/Time.hpp"
#include "Util/Transform.hpp"
#include "config.hpp"
#include "Util/Input.hpp"

void Background::Start() {

}
void Background::SetLists(std::vector<std::string> lists){
    for(unsigned i=0;i<lists.size();i++){
        m_lists.push_back(lists[i]);
    }
}
void Background::SetNext(){
    NowMove ++;
    NowMove %= m_lists.size();
    this->SetDrawable(
        std::make_unique<Util::Image>(m_lists[NowMove]));
}
void Background::Update(const Util::Transform &transform) {
    glm::vec2 dir = {0, 0};
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

    auto delta = static_cast<float>(Util::Time::GetDeltaTime());
    Util::Transform deltaTransform{
        dir * delta * 200.0F,   //移動、速度(向量)
        0 * delta,  //旋轉
        glm::vec2(1.28,0.72 ) * 5.0F }; //比例(縮放)

    pos += deltaTransform.translation;
    rotation += deltaTransform.rotation;
    scale = deltaTransform.scale;
    m_Drawable->Draw(m_Transform, m_ZIndex);
    for (auto &child : m_Children) {
        child->Update(deltaTransform);
    }

    //LOG_DEBUG("GIRA: x: {}, y: {}", pos.x, pos.y);
}
