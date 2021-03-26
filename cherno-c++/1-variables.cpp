//
//  1-variables.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/25/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "1-variables.hpp"

#include <iostream>

void Variables() {
    std::cout << "VARIABLES" << std::endl;
    // char - 1 byte
    // short - 2 bytes
    // int -  4 bytes
    // long - usually 4 bytes
    // long long - usually 8 bytes
    // you can add unsigned
    
    //char a = 'A';
    // gonna print A anyways
    char a = 65;
    
    // float is 4 bytes of data
    // float variable = 5.5;
    // You have actully defined a double up above
    
    // In order to define a float you have to append f or F
    float f = 5.5f;
    
    double d = 5.2;
    // Floats are 4 bytes , Double is 8 bytes
    
    // bool occupies one byte of memory
    bool b = true;
    
    std::cout << a << std::endl;
    std::cout << f << std::endl;
    
    // zero means false, anything else means true
    std::cout << b << std::endl;
    std::cout << "Size of float: " << sizeof(f) << std::endl;
    std::cout << "Size of double: " << sizeof(d) << std::endl;
    
    std::cout << std::endl << std::endl;
}
