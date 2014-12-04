#pragma once

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "BaseLayer.h"

class AlertLayer : public BaseLayer {
public:
    bool init();
    CREATE_FUNC(AlertLayer);
    
private:
    cocos2d::extension::ControlButton* _closeButton;
    void onClosePressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e);
};
