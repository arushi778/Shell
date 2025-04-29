#pragma once
#include<iostream>
#include<filesystem>
class LsCommand {
    std::string m_path;

public:
    void run(std::string path);
};