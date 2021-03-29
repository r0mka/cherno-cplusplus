//
//  22-string-literals.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "22-string-literals.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

void StringLiterals(){
    std::cout <<  "STRING LITERALS" << std::endl;
    
    using namespace std::string_literals;
    std::string name0 = "Cherno"s + " hello";
    std::cout << name0 << std::endl;
    
    const char* example = R"(Line1
Line2
Line3)";
    
    std::cout << example << std::endl;
    
    
    const char* ex = "Line1\n"
        "Line2\n"
        "Line3\n";
    
    std::cout << ex << std::endl;
    // String literals is series of characters in between two double quotes
    
    // because there is no const it's undefined behavior. String literals are stored in read only memory
//    char* name = "ROMAN";
//    name[2] = 'A';
    
    // instead do this with or without u8
    const char* name = u8"ROMAN";
    
    const wchar_t* name2 = L"Cherno"; // 2 bytes per character
    
    const char16_t* name3 = u"Cherno"; // 2 bytes per character
    const char32_t* name4 = U"Cherno"; // 4 bytes per character
    
    
    std::cout << strlen(name) << std::endl;
    std::cout << name << std::endl;
    
    std::cout << name2 << std::endl;
    std::cout << name3 << std::endl;
    std::cout << name4 << std::endl;
    
    std::cout << std::endl << std::endl;
    
}
