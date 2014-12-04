#pragma once

#include "cocos2d.h"
#include <list>
#include "BaseLayer.h"

/**
 * Androidバックキーに対応したシーン
 */
class BaseScene : public cocos2d::Scene {
public:
    virtual bool init();
    
    /**
     * Androidバックキーでバック可能かを指定します
     */
    void setAndroidBackKeyEnabled(bool enabled);
    
    void pushLayer(BaseLayer* layer);
    
    void popLayer(BaseLayer* layer);
    
protected:
    
    /**
     * Androidバックキーが押された時に呼ばれます
     */
    virtual void onAndroidBackKeyPressed();
    
    bool _isAndroidBackKeyEnabled = true;
    
    std::list<BaseLayer*> _layerStack;
};