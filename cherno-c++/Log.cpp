//
//  Log.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/25/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "Log.hpp"
#include <iostream>

void InitLog() {
    Log("Initializing Log\n");
}

void Log(const char* message) {
    std::cout << message;
}
