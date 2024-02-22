#ifndef MOUSEHELPER_HPP
#define MOUSEHELPER_HPP

#include "Util/Input.hpp"
#include "Util/Transform.hpp"
#include "pch.hpp" // IWYU pragma: export
#include <utility>
#include "Util/Logger.hpp"
#include "Util/GameObject.hpp"

class Helper {
    public:
        bool ObjectBeingClick( std::shared_ptr<Util::GameObject> target){
            auto img = target->getTransform();
            auto pos = img.translation;
            auto size = img.scale;
            auto mouse = Util::Input::GetCursorPosition();
            if (pos.y + 100*size[1] < mouse.y || pos.y - 100*size[1] > mouse.y) {
                return false;
            }
            if (pos.x + 100*size[0] < mouse.x || pos.x - 100*size[0] > mouse.x) {
                return false;
            }
            count ++;
            LOG_DEBUG("True hit: {}",count);
            return true;
        }
    private:
        int count=0;
};

#endif