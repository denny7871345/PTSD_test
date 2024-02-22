#ifndef GIRL_HPP
#define GIRL_HPP

#include "Character.hpp"

class Girl {
    public:
        Girl();
        void Update();
        void AddGirl();
    private:
        std::vector<std::shared_ptr<character>> girls;
        std::vector<std::shared_ptr<Util::Image>> skins;

};



#endif