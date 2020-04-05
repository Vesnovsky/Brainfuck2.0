#include "Interpreter.h"


Interpreter::Interpreter(std::string code)
{
    this->input = code;
}

void Interpreter::run()
{
    
    for (unsigned int i = 0; i < input.length(); i++)
    {
        switch (input[i])
        {
        case '+':
            cells[pointer]++;
            break;
        case '-':
            cells[pointer]--;
            break;
        case '>':
            pointer++;
            break;
        case '<':
            pointer--;
            break;
        case '[':
            stack.push(i);
            break;
        case ']':
            if (cells[pointer] != 0)
            {

                if (stack.empty())
                {
                    std::cout << "Ошибка: различное количество скобок" << std::endl;
                    break;
                }
                i = stack.top();
            }
            else
                stack.pop();
            break;
        case '.':
            output.push_back(cells[pointer]);
            break;
        case ',':
            std::cin >> cells[pointer];
            break;
        }
    }
   
}

std::string Interpreter::getOutput()
{
    return output;
}

std::string Interpreter::getProgram()
{
    return input;
}
