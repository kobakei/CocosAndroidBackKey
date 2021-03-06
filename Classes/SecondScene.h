#pragma once

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "BaseScene.h"

class SecondScene : public BaseScene {
public:
    bool init();
    CREATE_FUNC(SecondScene);
    
private:
    cocos2d::extension::ControlButton* _backButton;
    void onBackPressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e);
};