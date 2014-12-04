#include "AlertLayer.h"

USING_NS_CC;
USING_NS_CC_EXT;

bool AlertLayer::init() {
    if (!BaseLayer::init()) {
        return false;
    }
    
    // このレイヤーはバックキーで戻せません
    setAndroidBackKeyEnabled(false);
    
    auto bg = LayerColor::create(Color4B::RED);
    addChild(bg, 1);
    
    _closeButton = ControlButton::create("Close this layer", "", 30);
    _closeButton->setPosition(Vec2(100, 300));
    _closeButton->setAnchorPoint(Vec2(0, 0));
    _closeButton->addTargetWithActionForControlEvents(this,
                                                      cccontrol_selector(AlertLayer::onClosePressed),
                                                      Control::EventType::TOUCH_UP_INSIDE);
    addChild(_closeButton, 2);
    
    return true;
}

void AlertLayer::onClosePressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e) {
    dismiss();
}