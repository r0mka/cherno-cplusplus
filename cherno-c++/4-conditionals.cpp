//
//  conditionals.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/26/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "4-conditionals.hpp"
#include <iostream>
#include "Log.hpp"

void Conditionals(){
    std::cout << "CONDITIONALS" << std::endl;
    
    int x = 5;
    bool comparisonResult = x == 5;
    
    if (comparisonResult) {
        Log("Hello World\n");
    }
    
    const char* ptr = "Hello";
//    const char* ptr = nullptr;
    // if(ptr != nullptr)
    if (ptr)
        Log(ptr);
    
    if (ptr == "Hello")
        Log("Ptr is Hello!\n");
    else
        Log("Ptr is null\n");
    
    std::cout << std::endl << std::endl;
}
