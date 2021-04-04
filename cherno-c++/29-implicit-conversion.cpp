//
//  29-implicit-conversion.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 4/4/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "29-implicit-conversion.hpp"
#include <iostream>

class Entity29 {
private:
    std::string m_Name;
    int m_Age;
public:
    Entity29(const std::string& name): m_Name(name), m_Age(-1){}
    
    // disables implicit conversion
//    explicit Entity29(int age): m_Name("Unknown"), m_Age(age){}
    Entity29(int age): m_Name("Unknown"), m_Age(age){}
    
    const std::string& GetName() const{ return m_Name; }
    int GetAge() const { return m_Age; }
};

void PrintEntity29(const Entity29& entity){
    // Printing
    std::cout << entity.GetName() << std::endl;
    std::cout << entity.GetAge() << std::endl;
}

void ImplicitConversion(){
    std::cout <<  "IMPLICIT CONVERSION" << std::endl;
//    Entity29 a("Cherno");
    // implicit conversion
    Entity29 a = std::string("Cherno");

    
//    Entity29 b(22);
    // implicit conversion
    Entity29 b = 22;
    
    PrintEntity29(a);
    PrintEntity29(b);
    // implicit conversion. Because Entity has a constructor
    PrintEntity29(18);
    // PrintEntity29("Cherno") won't work because "Cherno" is not a std::string , but rather a const char array
//    PrintEntity29(std::string("Cherno"));
    PrintEntity29(Entity29("Roman"));
    
    
    std::cout << std::endl << std::endl;
}
