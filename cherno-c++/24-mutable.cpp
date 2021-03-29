//
//  24-mutable.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/28/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "24-mutable.hpp"
#include <iostream>
#include <string>

class EntityMutable {
private:
    std::string m_Name;
    mutable int m_DebugCount = 0;
    
public:
    const std::string& GetName() const {
        m_DebugCount++;
        std::cout << m_DebugCount;
        return m_Name;
    }
};



void Mutable(){
    std::cout <<  "MUTABLE KEY WORD" << std::endl;
    const EntityMutable e;
   
    std::cout << e.GetName() << std::endl;
    
    int x = 8;
    
    auto f = [=]() mutable {
        x++;
        std::cout << x << std::endl;
    };

    f();
    std::cout << x << std::endl;
    std::cout << std::endl << std::endl;
}
