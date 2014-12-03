#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "BaseScene.h"

class HelloWorld : public BaseScene
{
public:
    virtual bool init();
    
    CREATE_FUNC(HelloWorld);
    
private:
    cocos2d::extension::ControlButton* _nextButton;
    cocos2d::extension::ControlButton* _openButton;
    void onNextPressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e);
    void onOpenPressed(cocos2d::Ref* sender, cocos2d::extension::Control::EventType e);
};

#endif // __HELLOWORLD_SCENE_H__
