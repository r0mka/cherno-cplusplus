//
//  main.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/25/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include <iostream>

#include "1-variables.hpp"
#include "2-functions.hpp"
#include "3-header-files.hpp"
#include "4-conditionals.hpp"
#include "5-loops.hpp"
#include "6-control-flow.hpp"
#include "7-pointers.hpp"
#include "8-references.hpp"
#include "9-classes.hpp"
#include "10-classes-vs-structs.hpp"
#include "11-class.hpp"
#include "12-static.hpp"
#include "13-static-in-class.hpp"
#include "14-local-static.hpp"
#include "15-enums.hpp"
#include "16-constructors.hpp"


#define INTEGER int

// this preproccessor statement allows us to include or exclude code depending on the condition
// if true include the following code until #endif
#if 1
INTEGER Divide(INTEGER a, INTEGER b){
    std::cout << "Divide " << a << " by " << b  << " equals " << a / b << std::endl;
    return a / b;
}
#endif

// it's going to look for this variable in an external translation unit which is called external linkage
//extern int s_Variable;

// 11-static example
int s_Variable = 6;

int main() {
//    Divide(12, 4);
//    Variables();
//    Functions();
//    HeaderFiles();
//    Conditionals();
//    Loops();
//    ControlFlow();
//    Pointers();
//    References();
//    Classes();
//    Structs();
//    MakeClassV1();
//    
//    Static();
//    std:: cout << "Static variable: " << s_Variable << std::endl << std::endl;
//    
//    StaticInClassAndStruct();
//    
//    LocalStatic();
//    Enums();
    Constructors();
    //    std::cin.get();

    
// Just a demo of how header files work. This one containes the missing brace
#include "EndBrace.hpp"


