#include "HelloWorldScene.h"
#include "SecondScene.h"
#include "SimpleLayer.h"
#include "AlertLayer.h"

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
    
    _open2Button = ControlButton::create("Open alert layer", "", 30);
    _open2Button->setPosition(Vec2(100, 200));
    _open2Button->setAnchorPoint(Vec2(0, 0));
    _open2Button->addTargetWithActionForControlEvents(this,
                                                     cccontrol_selector(HelloWorld::onOpen2Pressed),
                                                     Control::EventType::TOUCH_UP_INSIDE);
    addChild(_open2Button);
    
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

void HelloWorld::onOpen2Pressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e) {
    auto layer = AlertLayer::create();
    layer->show();
}
