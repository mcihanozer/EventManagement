//
//  Observer.hpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#ifndef Observer_hpp
#define Observer_hpp

#include "IEventCallbacks.hpp"
#include "Object.hpp"


// Base class for Observers
class Observer : public Object, public IEventCallbacks
{
public:
    
    Observer();
    virtual ~Observer();
    
    virtual void actionEventCallback(ActionEvent pEvent) {}
    virtual void keyboardEventCallback(KeyboardEvents pEvent)    {}
    virtual void mouseEventCallback(MouseEvents pEvent) {}
};

#endif /* Observer_hpp */
