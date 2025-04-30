#pragma once
#include <string>

class LsCommand {
    std::string m_path;

public:
    void run(const std::string& path); 
    void run();                        
private:
    void runPrivate();
};
