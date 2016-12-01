#include <iostream>
#include <sstream>
#include "stack.h"
#include "postfix.h"

int precedence(char a)
{
    if (a == '*' || a == '/')
        return 2;
    if (a == '+' || a == '-')
        return 1;

    return 0;
}

std::string infix_2_postfix(std::string& infix)
{
    Stack<char> mystack; //custom Stack for char only
    istringstream in(infix);
    ostringstream out;
    char c;
    int n;
    while (in >> c)
    {
        if (isdigit(c))
        {
            in.putback(c);
            in >> n;
            out << n << " ";
        }

        switch(c)
        {
            case '(':
                mystack.push(c);
                break;
            case '*':
            case '/':
            case '+':
            case '-':
            case ')':

                while(mystack.size() > 0
                && precedence(c) <= precedence(mystack.top()))
                {
                    if (mystack.top() == '(')
                        mystack.pop();
                    else
                    {
                        out << mystack.top() << " ";
                        mystack.pop();
                    }
                }


                if ((mystack.empty() && c != ')') ||
                precedence(c) > precedence(mystack.top()))
                {
                    mystack.push(c);
                }
                break;
        } //end switch
    } //end while

    //clear out remainder operator on stack
    while (mystack.size() > 0)
    {
        out << mystack.top() << " ";
        mystack.pop();
    }

    return out.str();
}
