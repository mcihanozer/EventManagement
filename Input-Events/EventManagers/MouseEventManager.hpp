//
//  MouseEventManager.hpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#ifndef MouseEventManager_hpp
#define MouseEventManager_hpp

#include "Subject.hpp"

// Event manager for mouse events
class MouseEventManager : public Subject<MouseEvents>
{
public:
    
    MouseEventManager();
    ~MouseEventManager();
};

#endif /* MouseEventManager_hpp */
