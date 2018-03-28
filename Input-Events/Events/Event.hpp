//
//  Event.hpp
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#ifndef Event_hpp
#define Event_hpp

#include <SDL2/SDL_keycode.h>

// Parent events in SDLINATOR
enum SDLINATOR_EVENTS{ ACTION_EVENT, KEYBOARD_EVENT, MOUSE_EVENT };

// Base class for events
class Event
{
public:
    
    Event();
    Event(const unsigned int parent, const unsigned int eventType);
    
    unsigned int PARENT_EVENT;
    unsigned int EVENT_TYPE;
};

#endif /* Event_hpp */
