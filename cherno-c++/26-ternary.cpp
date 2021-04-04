//
//  26-ternary.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 4/3/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "26-ternary.hpp"
#include <iostream>

static int s_Level = 1;
static int s_Speed = 2;



void Ternary(){
    std::cout <<  "TERNARY" << std::endl;
    
    if(s_Level > 5) {
        s_Speed = 10;
    } else {
        s_Speed = 5;
    }
    
    s_Speed = s_Level > 5 ? 10 : 5;
    
    std::cout << s_Speed << std::endl;
}
