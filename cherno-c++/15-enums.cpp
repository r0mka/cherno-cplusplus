//
//  15-enums.cpp
//  cherno-c++
//
//  Created by Roman Nikolaenkov on 3/27/21.
//  Copyright © 2021 Roman Nikolaenkov. All rights reserved.
//

#include "15-enums.hpp"
#include <iostream>

// enums by default are 32 bit integers however you can change the type. Can't use float. Has to be an integer
enum Example: unsigned char {
//    A , B, C
    // 5, 6, 7
    A = 5 , B, C
};

int a = 0;
int b = 1;
int c = 2;


class LogV2 {
public:
    enum Level {
            LevelError = 0, LevelWarning, LevelInfo
    };
    
private:
    // m_ lets us know it's a class member variable that is private
    Level m_LogLevel = LevelInfo;
    
public:
    void SetLevel(Level level) {
        m_LogLevel = level;
    }
    
    void Error(const char* message) {
        if (m_LogLevel >= LevelError)
            std::cout << "[ERROR]: " << message << std::endl;
        
    }
    
    void Warn(const char* message) {
        if (m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }
    void Info(const char* message) {
        if (m_LogLevel >= LevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
    
  
};



void Enums(){
    std::cout <<  "ENUMS" << std::endl;
    
    Example value = B;
    
    LogV2 log;
    log.SetLevel(LogV2::LevelError);
    log.Warn("Hello");
    log.Info("Hello");
    log.Error("Hello");
    
    std::cout << std::endl << std::endl;
}
