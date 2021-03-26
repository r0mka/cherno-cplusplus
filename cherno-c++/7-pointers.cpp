//
//  7-pointers.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/26/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "7-pointers.hpp"
#include <iostream>

void Pointers(){
    std::cout << std::endl << std::endl;
    std::cout <<  "POINTERS" << std::endl;
    
    int var = 8;
    void* ptr  = &var;
    // double* ptr = (double*)&var;
    std::cout  <<  ptr;
    std::cout << std::endl;
    // will print 8
    std::cout << *((int*)ptr);
    std::cout << std::endl;
    
    *((int*)ptr) = 10;

    // will print 10
    std::cout << var;
    
    // allocating memory on the heap
    char* buffer = new char[8];
    
    // fill allocated 8 bytes with value 5
    memset(buffer, 5, 8);
    
    char** ptr2 = &buffer;
    
    delete[] buffer;
    
    std::cout << std::endl << std::endl;
}
