//
//  Object.cpp
//
//  Created by Cihan Ozer (www.mcihanozer.com)
//  Copyright © 2017 Cihan Ozer. All rights reserved.
//

#include "Object.hpp"

#include "IdManager.hpp" // See https://github.com/mcihanozer/Snippets/tree/master/IdManager

Object::Object()
{
    mId = ID_Manager.getNextId();
}

Object::~Object()
{
    ID_Manager.giveIdBack(mId);
}

int Object::getId()
{
    return mId;
}
