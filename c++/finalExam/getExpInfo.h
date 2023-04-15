#ifndef GET_EXP_INFO_H
#define GET_EXP_INFO_H

#include "Expression.h"
 
int Expression::getOperand1() const {
    return operand1;
}

char Expression::getOperator() const {
    return op;
}

int Expression::getOperand2() const {
    return operand2;
}


int getExpInfo(Expression** arr, int arrSize, Expression* searchExp, int& numSameOperand, int& numSameExpression);

#endif
