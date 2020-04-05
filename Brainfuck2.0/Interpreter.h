
#pragma once
#include <map>
#include <stack>
#include <string>
#include <iostream>
class Interpreter
{
public:
    Interpreter(std::string code);
    void run();
    std::string getOutput();
    std::string getProgram();
private:
    std::string input, output;
    std::stack<int> stack;
    std::map<int, char> cells;
    int pointer = 0;
};

