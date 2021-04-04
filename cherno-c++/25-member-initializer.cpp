//
//  25-member-initializer.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "25-member-initializer.hpp"
#include <iostream>
#include <string>


class Example25 {
public:
    Example25(){
        std::cout << "Created Entity!" << std::endl;
    }
    
    Example25(int x){
        std::cout << "Created Entity with " << x << "!" << std::endl;
    }
};

class Entity25 {
private:
    int m_Score;
    std::string m_Name;
    Example25 m_Example;
    
public:
    // have to list all the members in the order you declared them
    Entity25() : m_Score(0), m_Name("Unknown"){}
    
    Entity25(const std::string& name):  m_Score(1), m_Name(name), m_Example(8) {
        // this will create 2 entities instead of one 
//        m_Example = Example25(8);
    }
    
    const std::string& GetName() const {
        return m_Name;
    }
    
};

void MemberInitializerLists(){
    std::cout <<  "MEMBER INITIALIZER LISTS" << std::endl;
    
    Entity25 e("Roman");
    std::cout << e.GetName() << std::endl;
//    Entity25 e2;
//    std::cout << e2.GetName() << std::endl;
    std::cout << std::endl << std::endl;
}
