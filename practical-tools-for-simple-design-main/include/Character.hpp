#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <utility>
#include "Util/GameObject.hpp"
#include "Util/Image.hpp"

class character : public Util::GameObject {

public:
    void Update(const Util::Transform &transform = Util::Transform()) override;
    void Start() override;
    character(std::vector<std::shared_ptr<Util::Image>> skins){
        m_lists = skins;
        NowMove = 0;
        m_clock = 0;
        speed = 2;
    };
    void SetNext();
private:
    std::vector<std::shared_ptr<Util::Image>> m_lists;
    int NowMove;
    float m_clock;
    float fps;
    int speed;
};

#endif
