//
//  5-loops.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/26/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "5-loops.hpp"
#include <iostream>
#include "Log.hpp"

void Loops(){
    std::cout << "LOOPS" << std::endl;
    int i = 0;
    for(; i < 5;) {
        Log("Hello World\n");
        i++;
    }
    std::cout << std::endl << std::endl;
    for(int i = 0; i < 5; i++) {
        Log("Hello World\n");
    }
    
    std::cout << std::endl << std::endl;
    
    bool condition = true;
    i = 0;
    
    for(;condition;) {
        Log("Hello World\n");
        i++;
        if (i >= 5)
            condition = false;
        
    }
    std::cout << std::endl << std::endl;
    
    // Infinite loop same as for(; true ;)
    // for(;;){}
    
    
    i = 0;
    while(i < 5) {
        Log("Hello World\n");
        i++;
    }
    std::cout << std::endl << std::endl;
    
    i = 0; 
    do {
        Log("Hello World\n");
        i++;
    } while(i < 5);
}
