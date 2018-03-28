//
//  Object.hpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#ifndef Object_hpp
#define Object_hpp

// The very base class of SDLinator5000
class Object
{
public:
    
    Object();
    virtual ~Object();
    
    int getId();
    
private:
    
    int mId;
};

#endif /* Object_hpp */
