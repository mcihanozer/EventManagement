//
//  MouseEvents.hpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#ifndef MouseEvents_hpp
#define MouseEvents_hpp

#include "Event.hpp"

class MouseEvents : public Event
{
public:
    
    enum MOUSE_EVENTS{ MOUSE_MOVE, MOUSE_DOWN, MOUSE_UP  };
    
    MouseEvents();
    MouseEvents(const unsigned int eventType, const int mouseX, const int mouseY);
    
    int mousePosX, mousePosY;
};

#endif /* MouseEvents_hpp */
