#include "getExpInfo.h"
#include <iostream>
int getExpInfo(Expression** arr, int arrSize, Expression* searchExp, int& numSameOperand, int& numSameExpression) {
    numSameOperand = 0;
    numSameExpression = 0;

    for (int i = 0; i < arrSize; i++) {
        Expression* currentExp = arr[i];

        // Check if current expression has at least one operand in common with search expression
        if (currentExp->getOperand1() == searchExp->getOperand1() || currentExp->getOperand1() == searchExp->getOperand2() ||
            currentExp->getOperand2() == searchExp->getOperand1() || currentExp->getOperand2() == searchExp->getOperand2()) {
            numSameOperand++;
        }

        // Check if current expression is the same as the search expression
        if (currentExp->getOperand1() == searchExp->getOperand1() && currentExp->getOperator() == searchExp->getOperator() &&
            currentExp->getOperand2() == searchExp->getOperand2()) {
            numSameExpression++;
        }
    }

    return 0;
}


int main() {
    Expression* exp1 = new Expression(3, 4, '+');
    Expression* exp2 = new Expression(5, 6, '-');
    Expression* exp3 = new Expression(3, 4, '*');
    Expression* exp4 = new Expression(2, 5, '/');
    Expression* exp5 = new Expression(3, 4, '+');

    Expression* searchExp = new Expression(3, 4, '+');

    Expression* expressions[5] = {exp1, exp2, exp3, exp4, exp5};

    int sameOperandCount, sameExpressionCount;

    int result = getExpInfo(expressions, 5, searchExp, sameOperandCount, sameExpressionCount);

    std::cout << "Number of elements that have the same operand as the search Expression: " << sameOperandCount << std::endl;
    std::cout << "Number of elements that are the same as the search Expression: " << sameExpressionCount << std::endl;

    delete exp1;
    delete exp2;
    delete exp3;
    delete exp4;
    delete exp5;
    delete searchExp;

    return 0;
}
