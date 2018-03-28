//
//  KeyboardEvents.cpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#include "KeyboardEvents.hpp"

KeyboardEvents::KeyboardEvents()
    : Event()
{
    
}

KeyboardEvents::KeyboardEvents(const unsigned int eventType, const SDL_Keycode keyCode)
:   Event(SDLINATOR_EVENTS::KEYBOARD_EVENT, eventType),
    key(keyCode)
{
    
}
