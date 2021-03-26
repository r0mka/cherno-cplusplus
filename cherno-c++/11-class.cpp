//
//  11-class.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/26/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "11-class.hpp"
#include <iostream>

class Log {
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
    
private:
    // m_ lets us know it's a class member variable that is private
    int m_LogLevel = LogLevelInfo;
    
public:
    void SetLevel(int level) {
        m_LogLevel = level;
    }
    
    void Error(const char* message) {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }
    
    void Warn(const char* message) {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }
    void Info(const char* message) {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};


void MakeClassV1() {
    std::cout <<  "MAKE CLASS V1" << std::endl;
    
    Log log;
    log.SetLevel(log.LogLevelError);
    log.Warn("Hello");
    log.Info("Hello");
    log.Error("Hello");
    
    
    std::cout << std::endl << std::endl;
}
