//
//  Box.cpp
//  LearningCPlusPlus
//
//  Created by Faisal Abid on 2012-08-05.
//  Copyright (c) 2012 Faisal Abid. All rights reserved.
//

#include "Box.h"


int x;
int y;
Box::Box(int z,int w){
    x = z;
    y = w;
}

Box::Box(){
    
}

int Box::getArea(){
    return x*y;
}


