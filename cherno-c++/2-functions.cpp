//
//  2-functions.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/25/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "2-functions.hpp"
#include <iostream>

int Multiply(int a, int b) {
    return a * b;
}
// if your function returns something dont forget to return a value
int MultiplyAndLog(int a, int b) {
    int result = Multiply(a, b);
    std::cout << result << std::endl;
    return 0;
}



void Functions() {
    std::cout << "FUNCTIONS" << std::endl;
    
    MultiplyAndLog(3, 2);
    MultiplyAndLog(4, 5);
    MultiplyAndLog(6, 2);
    
}
