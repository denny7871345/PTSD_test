#ifndef BACKGROUND_HPP
#define BACKGROUND_HPP

#include <utility>
#include "Util/GameObject.hpp"

class Background : public Util::GameObject {

public:
    void Update(const Util::Transform &transform = Util::Transform()) override;
    void Start() override;
    Background(){
        NowMove = 0;
    }
    void SetLists(std::vector<std::string> lists);
    void SetNext();
private:
    std::vector<std::string> m_lists;
    int NowMove;
};

#endif
