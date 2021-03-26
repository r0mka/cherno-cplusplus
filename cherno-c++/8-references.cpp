//
//  8-references.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/26/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "8-references.hpp"
#include <iostream>

void Increment(int& value, int* valuePtr) {
    value++;
    (*valuePtr)++;
}

void References() {
    std::cout <<  "REFERENCES" << std::endl;
    
    int x = 5;
    int y = 5;
    
    // reference
    int& ref = x;
    ref++;
    
    Increment(x, &y);
    
    std::cout << x << " " << y ;
    
    std::cout << std::endl << std::endl;
}
