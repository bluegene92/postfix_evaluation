#ifndef POSTFIX_EVAL_H
#define POSTFIX_EVAL_H

/**
* Given the operator, compute the 2 operands
* @param firstOperand is the value of the left
* @param secondOperand is the value of the right
* @param operator_type is the operator to use to compute
* @return return a rounded value
*/
int eval(int& firstOperand, int& secondOperand, char& operator_type);


/**
* Return the value of postfix evaluation
* @param postfix formatted string
* @return value computed from postfix
*/
int postfix_evaluation(std::string& postfix);

#endif
