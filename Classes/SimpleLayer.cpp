//
//  SimpleLayer.cpp
//  CocosAndroidBackKey
//
//  Created by 小林 佳祐 on 2014/12/03.
//
//

#include "SimpleLayer.h"

USING_NS_CC;
USING_NS_CC_EXT;

bool SimpleLayer::init() {
    if (!BaseLayer::init()) {
        return false;
    }
    
    auto bg = LayerColor::create(Color4B::BLUE);
    addChild(bg, 1);
    
    _openButton = ControlButton::create("Open more layer", "", 30);
    _openButton->setPosition(Vec2(100, 400));
    _openButton->setAnchorPoint(Vec2(0, 0));
    _openButton->addTargetWithActionForControlEvents(this,
                                                     cccontrol_selector(SimpleLayer::onOpenPressed),
                                                     Control::EventType::TOUCH_UP_INSIDE);
    addChild(_openButton, 2);
    
    _closeButton = ControlButton::create("Close this layer", "", 30);
    _closeButton->setPosition(Vec2(100, 300));
    _closeButton->setAnchorPoint(Vec2(0, 0));
    _closeButton->addTargetWithActionForControlEvents(this,
                                                     cccontrol_selector(SimpleLayer::onClosePressed),
                                                     Control::EventType::TOUCH_UP_INSIDE);
    addChild(_closeButton, 2);
    
    return true;
}

void SimpleLayer::onOpenPressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e) {
    auto layer = SimpleLayer::create();
    layer->show();
}

void SimpleLayer::onClosePressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e) {
    dismiss();
}
