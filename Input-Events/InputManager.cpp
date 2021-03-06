//
//  InputManager.cpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#include "InputManager.hpp"

///////////// CONSTRUCTOR - DESTRUCTOR /////////////

InputManager& InputManager::getInstance()
{
    static InputManager instance;
    return instance;
}

InputManager::InputManager()
{
    
}

InputManager::~InputManager()
{
    
}

///////////// PUBLIC METHODS /////////////

void InputManager::handleEvents()
{
    // Poll events
    while( SDL_PollEvent(&mSdlEvent) != 0 )
    {
        if( mSdlEvent.type == SDL_QUIT)
        {
            // It will be here if you click to close (X of the window)
            ActionEvent event(ActionEvent::QUIT_EVENT);
            mActionEventManager.notify(event);
        }
        
        if(mSdlEvent.type == SDL_KEYDOWN)
        {
            KeyboardEvents event(KeyboardEvents::KEY_DOWN, mSdlEvent.key.keysym.sym);
            mKeyboardEventManager.notify(event);
        }
        
        if(mSdlEvent.type == SDL_KEYUP)
        {
            KeyboardEvents event(KeyboardEvents::KEY_UP, mSdlEvent.key.keysym.sym);
            mKeyboardEventManager.notify(event);
        }
        
        if(mSdlEvent.type == SDL_MOUSEMOTION)
        {
            int x, y;
            SDL_GetMouseState(&x, &y);
            MouseEvents event(MouseEvents::MOUSE_MOVE, x, y);
            mMouseEventManager.notify(event);
        }
        
        if(mSdlEvent.type == SDL_MOUSEBUTTONDOWN)
        {
            int x, y;
            SDL_GetMouseState(&x, &y);
            MouseEvents event(MouseEvents::MOUSE_DOWN, x, y);
            mMouseEventManager.notify(event);
        }
        
        if(mSdlEvent.type == SDL_MOUSEBUTTONUP)
        {
            int x, y;
            SDL_GetMouseState(&x, &y);
            MouseEvents event(MouseEvents::MOUSE_UP, x, y);
            mMouseEventManager.notify(event);
        }
    }
}

void InputManager::addToActionListener(Observer* const object, void(Observer::* const func)(ActionEvent) )
{
    mActionEventManager.attach(object, func);
}

void InputManager::addToKeyboardListener(Observer* const object, void(Observer::* const func)(KeyboardEvents) )
{
    mKeyboardEventManager.attach(object, func);
}

void InputManager::addToMouseListener(Observer* const object, void(Observer::* const func)(MouseEvents) )
{
    mMouseEventManager.attach(object, func);
}

void InputManager::removeFromListeners(const int pObserverId)
{
    mActionEventManager.detach(pObserverId);
    mKeyboardEventManager.detach(pObserverId);
    mMouseEventManager.detach(pObserverId);
}
