//
//  20-arrays.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "20-arrays.hpp"
#include <iostream>
#include <array>

class Example {
public:
    int* x = new int[5];
    
    Example(){
        for(int i = 0; i < 5; i++) {
            x[i] = 2;
        }
    }
};

void Arrays(){
    std::cout <<  "Arrays" << std::endl;
    
    static const int exampleSize = 5;
    int example[exampleSize];
    
    int* ptr = example;
    
    for(int i = 0; i < 5; i++) {
        example[i] = i;
    }
    
    for(int i = 0; i < 5; i++) {
//        std::cout << example[i] << std::endl;
        // for demo only. Cast our pointer to char pointer which is 1 byte.
        // There fore we need to multiply i by 4 bytes to get the size of int
        // Then cast the result back into int pointer
        // Then dereference that int pointer
        std::cout << *(int*)((char*)ptr + i * 4) << std::endl;
    }
    
    
    // The first example created on the stack
    // This example created on the heap therefore you'll need to manually delete it
    int* another = new int[5];
    for(int i = 0; i < 5; i++) {
        another[i] = 2;
    }
    for(int i = 0; i < 5; i++) {
        std::cout << another[i] << std::endl;
    }
    delete[] another;
    
    Example e;
    
    
    std::array<int, 5> arr;
    
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = 5;
    }
    
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    
}

