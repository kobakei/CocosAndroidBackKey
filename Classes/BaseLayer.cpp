//
//  BaseLayer.cpp
//  CocosAndroidBackKey
//
//  Created by 小林 佳祐 on 2014/12/03.
//
//

#include "BaseLayer.h"
#include "BaseScene.h"

USING_NS_CC;

void BaseLayer::show() {
    auto scene = dynamic_cast<BaseScene*>(Director::getInstance()->getRunningScene());
    if (scene) {
        scene->addChild(this);
        scene->pushLayer(this);
    }
}

void BaseLayer::dismiss() {
    auto scene = dynamic_cast<BaseScene*>(Director::getInstance()->getRunningScene());
    if (scene) {
        scene->removeChild(this);
        scene->popLayer(this);
    }
}