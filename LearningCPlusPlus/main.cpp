//
//  main.cpp
//  LearningCPlusPlus
//
//  Created by Faisal Abid on 2012-08-05.
//  Copyright (c) 2012 Faisal Abid. All rights reserved.
//

#include <iostream>
#include "Box.h"
int main(int argc, const char * argv[])
{

    Box b = *new Box(4,3);
    
    // insert code here...
    std::cout << b.getArea();
    return 0;
}

