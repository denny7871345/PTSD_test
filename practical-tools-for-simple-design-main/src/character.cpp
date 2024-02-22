#include "character.hpp"
#include "Util/GameObject.hpp"
#include "Util/Image.hpp"
#include "Util/Text.hpp"
#include "Util/Time.hpp"
#include "Util/Transform.hpp"
#include "config.hpp"
#include "Util/Input.hpp"

void character::Start() {
   
}
void character::SetNext(){
    NowMove ++;
    NowMove %= m_lists.size();
    this->SetDrawable(
        m_lists[NowMove]);
}
void character::Update(const Util::Transform &transform) {
    static glm::vec2 dir = {0, 0};
    auto &pos = m_Transform.translation;
    auto &scale = m_Transform.scale;
    auto &rotation = m_Transform.rotation;
    auto delta = static_cast<float>(Util::Time::GetDeltaTime());
    m_clock += delta;
    static float fps = speed * 1.0 / m_lists.size() ;
    if(m_clock > fps){
        this->SetNext();
        m_clock -= fps;
    }
    auto mouse = Util::Input::GetCursorPosition();
    dir.y = mouse.y - pos.y;
    dir.x = mouse.x - pos.x;

    Util::Transform deltaTransform{
        dir * delta * 1.0F,   //移動、速度(向量)
        0 * delta,  //旋轉
        glm::vec2(1,1 ) * 1.0F }; //比例(縮放)

    pos += deltaTransform.translation;
    rotation += deltaTransform.rotation;
    scale = deltaTransform.scale;

    m_Drawable->Draw(m_Transform, m_ZIndex);
    for (auto &child : m_Children) {
        child->Update(deltaTransform);
    }

    //LOG_DEBUG("GIRA: x: {}, y: {}", pos.x, pos.y);
}
