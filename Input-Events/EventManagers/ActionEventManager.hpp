//
//  ActionEventManager.hpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#ifndef ActionEventManager_hpp
#define ActionEventManager_hpp

#include "Subject.hpp"

// Event manager for SDLinator5000 Action events
class ActionEventManager : public Subject<ActionEvent>
{
public:
    
    ActionEventManager();
    ~ActionEventManager();
};

#endif /* ActionEventManager_hpp */
