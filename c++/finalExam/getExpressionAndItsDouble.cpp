#include "getExpressionAndItsDouble.h"
#include <iostream>

Expression::Expression(int o1, int o2, char operation) {
    operand1 = o1;
    operand2 = o2;
    op = operation;
}

int Expression::getOperand1() const {
    return operand1;
}

int Expression::getOperand2() const {
    return operand2;
}

char Expression::getOperator() const {
    return op;
}

Expression* getExpressionAndItsDouble(int o1, int o2, char operation) {
    if (operation != '+' && operation != '-') {
        return nullptr;
    }

    Expression* exp1 = new Expression(o1, o2, operation);
    Expression* exp2 = new Expression(o1 * 2, o2 * 2, operation);

    return exp1;
}

int main() {
    int operand1 = 2;
    int operand2 = 3;
    char op = '*';

    Expression* exp = getExpressionAndItsDouble(operand1, operand2, op);

    if (exp != nullptr) {
        std::cout << "Expression: " << exp->getOperand1() << " " << exp->getOperator() << " " << exp->getOperand2() << std::endl;

        delete exp;
    }
    else {
        std::cout << "Invalid operator" << std::endl;
    }

    return 0;
}