#include "BaseScene.h"

USING_NS_CC;
using namespace std;

bool BaseScene::init() {
    if (!Scene::init()) {
        return false;
    }
    
    auto listener = EventListenerKeyboard::create();
    listener->onKeyReleased = [this](EventKeyboard::KeyCode keyCode, Event* unused_event) {
        if (keyCode == EventKeyboard::KeyCode::KEY_ESCAPE) {
            this->onAndroidBackKeyPressed();
        }
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    return true;
}

void BaseScene::onAndroidBackKeyPressed() {
    
    if (_isAndroidBackKeyEnabled) {
        
        // バックキーのスタックにBaseLayerがいれば、一番上のを削除します
        // なければ、シーンをpopします
        if (_layerStack.empty()) {
            Director::getInstance()->popScene();
        } else {
            auto layer = _layerStack.front();
            layer->dismiss();
        }
        
    }
    
}

void BaseScene::pushLayer(BaseLayer* layer) {
    _layerStack.push_front(layer);
}

void BaseScene::popLayer(BaseLayer* layer) {
    list<BaseLayer*>::iterator it = _layerStack.begin();
    while( it != _layerStack.end() ) {
        if (*it == layer) {
            _layerStack.erase(it);
        }
        ++it;
    }
}
