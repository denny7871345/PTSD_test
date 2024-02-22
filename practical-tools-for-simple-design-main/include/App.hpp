#ifndef APP_HPP
#define APP_HPP

#include "pch.hpp" // IWYU pragma: export
#include "MouseHelper.hpp"
#include "Giraffe.hpp"
#include "Triangle.hpp"
#include "Background.hpp"
#include "character.hpp"
#include "Girl.hpp"
class App {
public:
    enum class State {
        START,
        UPDATE,
        END,
    };

    State GetCurrentState() const { return m_CurrentState; }

    void Start();
    void Update();
    void End(); // NOLINT(readability-convert-member-functions-to-static)

private:
    State m_CurrentState = State::START;
    Triangle m_Triangle;
    std::shared_ptr<Giraffe> m_Giraffe = std::make_shared<Giraffe>();
    Helper m_Helper;
    std::shared_ptr<Background> background = std::make_shared<Background>();
    float timer = 0;
    std::vector<std::shared_ptr<Girl>> Ch_list;
};



#endif
