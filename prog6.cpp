/************************************************************************
 *
 * Name: Dat Tran
 * Assignment 6 - Postfix evaluation
 * Class: Dr. Stockwell Programming 1 T, Th 11 a.m.
 * Due: Thursday, December 1 2016
 *
 ************************************************************************/
#include <iostream>
#include <iomanip>
#include <sstream>
#include "postfix.h"
#include "postfix_evaluation.h"

using namespace std;

int main()
{

    cout << setw(50) << "Expression Evaluation" << endl;
    cout << endl;
    for(string line; getline(cin, line);)
    {
        cout << setw(8) << left << "Infix: ";
        cout << setw(60) << left << line;
        string postfix = infix_2_postfix(line);
        cout << postfix_evaluation(postfix) << endl;
        cout << setw(8) << "Postfix: " << postfix << endl;
        cout << endl;
    }
return 0;
}
