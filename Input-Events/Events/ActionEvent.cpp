//
//  ActionEvent.cpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#include "ActionEvent.hpp"

ActionEvent::ActionEvent()
: Event()
{
    
}

ActionEvent::ActionEvent(const unsigned int eventType)
:   Event(SDLINATOR_EVENTS::ACTION_EVENT, eventType)
{
    
}
