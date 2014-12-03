#include "HelloWorldScene.h"
#include "SecondScene.h"
#include "SimpleLayer.h"

USING_NS_CC;
USING_NS_CC_EXT;

bool HelloWorld::init() {
    if (!BaseScene::init()) {
        return false;
    }
    
    _nextButton = ControlButton::create("Go to next scene", "", 30);
    _nextButton->setPosition(Vec2(100, 400));
    _nextButton->setAnchorPoint(Vec2(0, 0));
    _nextButton->addTargetWithActionForControlEvents(this,
                                                     cccontrol_selector(HelloWorld::onNextPressed),
                                                     Control::EventType::TOUCH_UP_INSIDE);
    addChild(_nextButton);
    
    _openButton = ControlButton::create("Open layer", "", 30);
    _openButton->setPosition(Vec2(100, 300));
    _openButton->setAnchorPoint(Vec2(0, 0));
    _openButton->addTargetWithActionForControlEvents(this,
                                                     cccontrol_selector(HelloWorld::onOpenPressed),
                                                     Control::EventType::TOUCH_UP_INSIDE);
    addChild(_openButton);
    
    return true;
}

void HelloWorld::onNextPressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e) {
    auto nextScene = SecondScene::create();
    Director::getInstance()->pushScene(nextScene);
}

void HelloWorld::onOpenPressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e) {
    auto layer = SimpleLayer::create();
    layer->show();
}
