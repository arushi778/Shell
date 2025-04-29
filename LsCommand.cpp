#include <iostream>
#include <filesystem>
#include "LsCommand.h"

void LsCommand::run() {
    m_path = env.getCurrentPath();
    runPrivate();
}

void LsCommand::run(std::string path) {
    m_path = path;
    runPrivate();
}

void LsCommand::runPrivate() {
    for (const auto& entry : std::filesystem::directory_iterator(m_path)) {

        std::cout << entry.path().filename().string() << "\n";
    }
}
