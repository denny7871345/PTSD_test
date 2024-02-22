#include "App.hpp"
#include "Core/Context.hpp"
#include "Util/BGM.hpp"
#include "Util/Keycode.hpp"
#include "Util/Logger.hpp"
#include "Util/Input.hpp"
#include "Util/SFX.hpp"


int main(int, char **) {
    bool musicState = true;
    auto context = Core::Context::GetInstance();
    App app;
    auto bgm = Util::BGM("../assets/audio/testbgm.mp3");
    auto sfx = Util::SFX("../assets/audio/Click.wav");
    sfx.SetVolume(100);
    bgm.Play();
    
    while (!context->GetExit()) {
        switch (app.GetCurrentState()) {
        case App::State::START:
            app.Start();
            break;

        case App::State::UPDATE:
            app.Update();
            break;

        case App::State::END:
            app.End();
            context->SetExit(true);
            break;
        }
        context->Update();
    }
    
    
    return 0;
}
