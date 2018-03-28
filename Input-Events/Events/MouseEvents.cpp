//
//  MouseEvents.cpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#include "MouseEvents.hpp"

MouseEvents::MouseEvents()
    : Event()
{
    
}

MouseEvents:: MouseEvents(const unsigned int eventType, const int mouseX, const int mouseY)
:   Event(SDLINATOR_EVENTS::MOUSE_EVENT, eventType),
    mousePosX(mouseX), mousePosY(mouseY)
{
    
}
