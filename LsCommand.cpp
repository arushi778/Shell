#include <iostream>
#include <filesystem>
#include "LsCommand.h"
#include "ShellEnv.h" 

void LsCommand::run() {
    m_path = ShellEnv::getInstance().getCurrentPath(); 
}

void LsCommand::run(const std::string& path) {
    m_path = path;
    runPrivate();
}

void LsCommand::runPrivate() {
    try {
        for (const auto& entry : std::filesystem::directory_iterator(m_path)) {
            std::cout << entry.path().filename().string() << "\n";
        }
    }
    catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error reading directory: " << e.what() << "\n";
    }
}
