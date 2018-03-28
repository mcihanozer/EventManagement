//
//  Event.cpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#include "Event.hpp"

Event::Event()
{
    
}

Event::Event(const unsigned int parent, const unsigned int eventType)
    : PARENT_EVENT(parent), EVENT_TYPE(eventType)
{
    
}
