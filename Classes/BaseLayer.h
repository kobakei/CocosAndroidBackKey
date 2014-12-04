#pragma once

#include "cocos2d.h"

/**
 * Androidバックキーに対応したレイヤー
 */
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
    
    /**
     * このレイヤーがバックキーで戻せるかを指定します
     */
    virtual void setAndroidBackKeyEnabled(bool enabled);
    
    /**
     * このレイヤーがバックキーで戻せるかを返します
     */
    virtual bool isAndroidBackKeyEnabled() const;
    
protected:
    bool _isAndroidBackKeyEnabled = true;
};
