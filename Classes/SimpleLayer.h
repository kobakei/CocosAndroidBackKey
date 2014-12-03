//
//  SimpleLayer.h
//  CocosAndroidBackKey
//
//  Created by 小林 佳祐 on 2014/12/03.
//
//

#pragma once

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "BaseLayer.h"

class SimpleLayer : public BaseLayer {
public:
    bool init();
    CREATE_FUNC(SimpleLayer);
    
private:
    cocos2d::extension::ControlButton* _openButton;
    cocos2d::extension::ControlButton* _closeButton;
    void onOpenPressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e);
    void onClosePressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e);
};
