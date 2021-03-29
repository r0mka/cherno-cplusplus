//
//  21-strings.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "21-strings.hpp"
#include <iostream>
#include <string>

// Not a good way to pass a string into a function. Because
// when you pass a class like this to a function, you're creating a copy of that object.
// Copying a string means that we have to dynamically allocate a brand new char array on the heap. That is quite slow.
//void PrintString(std::string string){}

// Make sure you pass it by const reference
// const means we are promising not to modify here
void PrintString(const std::string& string){
    std::cout << "Print String: " << string << std::endl;
}

void Strings() {
    std::cout <<  "STRINGS" << std::endl;
    const char* name = "Roman";
    
    // characters in c++ nmust be in single quotes, if it's in double quotes it atomatically become a char pointer
    char name2[6] = {'R', 'O', 'M', 'A', 'N', '\0'};
    
    std::string name3 = "ROMAN";
    
    // Will not work because you can't add const char  pointers
//    std::string name4 = "ROMAN" + " " + "NIKOLAENKOV";
    
    
//    std::string name4 = (std::string)"ROMAN" + " " + "NIKOLAENKOV";
//    std::string name4 = std::string("ROMAN") + " " + "NIKOLAENKOV";
    std::string name4 = "ROMAN";
    name4 +=  " NIKOLAENKOV";
    bool containes = name4.find("NI") != std::string::npos;
    
    std::cout << name << std::endl;
    std::cout << name2 << std::endl;
    std::cout << "String: " << name3 << " is of size " <<  name3.size() << std::endl;
    std::cout << name4 << std::endl;
    std::cout << (containes ? "Containes NI"  : "Doesn't contain NI") << std::endl;
    PrintString(name4);
    std::cout << std::endl << std::endl;
    
}
