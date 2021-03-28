//
//  12-static.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/27/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "12-static.hpp"
#include <iostream>

// use extern key word in another file where you want to use this variable.
//int s_Variable = 5;

// this variable only going to be linked internally inside this translation unit
static int s_Variable = 5;

void Static() {
    std::cout <<  "STATIC" << std::endl;
    std:: cout << "Static variable: " << s_Variable << std::endl;
}
