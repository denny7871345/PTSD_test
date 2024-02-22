#include"Girl.hpp"

Girl::Girl(){
    std::vector<std::string> lists = {
         "../assets/girl/1.png",
         "../assets/girl/2.png",
         "../assets/girl/3.png",
         "../assets/girl/4.png",
         "../assets/girl/5.png",
         "../assets/girl/6.png",
         "../assets/girl/7.png",
         "../assets/girl/8.png",
         "../assets/girl/9.png",
         "../assets/girl/10.png",
         "../assets/girl/11.png",
         "../assets/girl/12.png",
         "../assets/girl/13.png"
    };
    for(unsigned i=0;i<lists.size();i++){
        std::shared_ptr<Util::Image> token = std::make_shared<Util::Image>(lists[i]);
        skins.push_back(token);
    }
}

void Girl::Update(){
    for(unsigned i=0;i<girls.size();i++){
        girls[i]->Update();
    }
}

void Girl::AddGirl(){
    std::shared_ptr<character> token = std::make_shared<character>(skins);
    token->SetZIndex(2);
    token->SetNext();
    token->Start();
    token->Update();
    girls.push_back(token);
}