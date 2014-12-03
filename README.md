CocosAndroidBackKey
===================

cocos2dx sample to handle android back key

## How to use

Import the following files into your project:

* BaseScene.h
* BaseScene.cpp
* BaseLayer.h
* BaseLayer.cpp

and replace cocos2d::Scene and cocos2d::Layer with BaseScene and BaseLayer.

## Sample

You can use BaseScene as same as cocos2d::Scene.
To switch scene, use cocos2d::Director methods.

To use BaseLayer, use show and dismiss method instead of addChild and removeChild.

```cpp
// MyLayer is a subclass of BaseLayer

// Add MyLayer to the current scene
auto layer = MyLayer::create();
layer->show();

// Remove MyLayer
layer->dismiss();
```
