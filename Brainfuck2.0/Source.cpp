#include <map>
#include <stack>
#include <string>
#include <iostream>
#include "Interpreter.h"

int main()
{

    std::string input;
    std::cin >> input;
    Interpreter interp(input);
    interp.run();
    std::cout<<interp.getOutput() << std::endl;

    return 0;
}