//
//  6-control-flow.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/26/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "6-control-flow.hpp"
#include <iostream>
#include "Log.hpp"


int ControlFlow(){
    std::cout << "CONTROL FLOW" << std::endl;
    
    for(int i = 0; i < 5; i++) {
        if(i % 2 == 0)
            continue;
        
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    for(int i = 0; i < 5; i++) {
        if((i+1) % 2 == 0)
            return 0;
        
        std::cout << i << " ";
    }
    
    std::cout  << std::endl << std::endl;
    return 0;
}
