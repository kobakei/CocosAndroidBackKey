#include "SecondScene.h"

USING_NS_CC;
USING_NS_CC_EXT;

bool SecondScene::init() {
    if (!BaseScene::init()) {
        return false;
    }
    
    _backButton = ControlButton::create("Back", "", 30);
    _backButton->setPosition(Vec2(100, 400));
    _backButton->addTargetWithActionForControlEvents(this,
                                                     cccontrol_selector(SecondScene::onBackPressed),
                                                     Control::EventType::TOUCH_UP_INSIDE);
    addChild(_backButton);
    
    return true;
}

void SecondScene::onBackPressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e) {
    Director::getInstance()->popScene();
}