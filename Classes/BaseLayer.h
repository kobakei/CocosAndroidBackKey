#pragma once

#include "cocos2d.h"

class BaseLayer : public cocos2d::Layer {
public:

    /**
     * バックキーのスタックに積んで、現在のシーンにaddします
     */
    virtual void show();
    
    /**
     * バックキーのスタックから削除して、現在のシーンからremoveします
     */
    virtual void dismiss();
};
