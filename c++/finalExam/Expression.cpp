#include <iostream>
#include "Expression.h"

int main() {
    Expression e1(10, '+', 5);
    Expression e2(12, '-', 2);

    std::cout << "e1: " << e1.toString() << std::endl;
    std::cout << "e2: " << e2.toString() << std::endl;

    int compareResult = e1.compare(e2);
    std::cout << "compareResult: " << compareResult << std::endl;

    bool hasOneOperandTheSameResult = e1.hasOneOperandTheSame(e2);
    std::cout << "hasOneOperandTheSameResult: " << hasOneOperandTheSameResult << std::endl;

    Expression* doubleExpression = e1.createDouble();
    std::cout << "doubleExpression: " << doubleExpression->toString() << std::endl;

    delete doubleExpression;
    return 0;
}
