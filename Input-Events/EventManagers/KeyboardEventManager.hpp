//
//  KeyboardEventManager.hpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#ifndef KeyboardEventManager_hpp
#define KeyboardEventManager_hpp

#include "Subject.hpp"

// Event manager for keyboard events
class KeyboardEventManager : public Subject<KeyboardEvents>
{
public:
    
    KeyboardEventManager();
    ~KeyboardEventManager();
};

#endif /* KeyboardEventManager_hpp */
