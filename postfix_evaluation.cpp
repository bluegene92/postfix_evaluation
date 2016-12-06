#include <iostream>
#include <sstream>
#include "stack.h"
#include "postfix_evaluation.h"

int eval(int& firstOperand, int& secondOperand, char& operator_type)
{
    if (operator_type == '*')
        return firstOperand * secondOperand;
    if (operator_type == '/')
        return firstOperand / secondOperand;
    if (operator_type == '+')
        return firstOperand + secondOperand;
    if (operator_type == '-')
        return firstOperand - secondOperand;
    return 0;
}

int postfix_evaluation(std::string& postfix)
{
    char c;
    istringstream in(postfix);
    int n;
    Stack<int> listed;
    int count = 0;
    int r = 0;
    while (in >> c)
    {
        if (isdigit(c))
        {
            in.putback(c);
            in >> n;
            listed.push(n);
        }

        switch (c)
        {
            case '*':
            case '/':
            case '+':
            case '-':
                int r1 = listed.operand1();
                int r2 = listed.operand2();
                listed.pop();
                listed.pop();
                int computed = eval(r1, r2, c);
                listed.push(computed);
            break;
        }
    }
    return listed.top();
}

