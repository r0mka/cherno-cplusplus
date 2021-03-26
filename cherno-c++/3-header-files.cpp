//
//  3-header-files.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/25/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "3-header-files.hpp"
#include "Log.hpp"
#include <iostream>

void HeaderFiles() {
    std::cout << "HEADER FILES" << std::endl;
    InitLog();
    Log("Hello World");
}


