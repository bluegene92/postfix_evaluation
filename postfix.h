#ifndef POSTFIX_H
#define POSTFIX_H

/**
* Assign precedence to a character
* @param a is the character or operator (ex. * / + - ( ))
* @return precedence value
*/
int precedence(char a);

/**
* Convert infix expression to postfix
* @param string is the infix expression (ex. 2 + 3)
* @return postfix expression (ex. 2 3 +)
*/
std::string infix_2_postfix(std::string& infix);

#endif
