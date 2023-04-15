#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>

class Expression {
private:
    int operand1;
    char op;
    int operand2;

public:
    Expression(int o1, char o, int o2) {
        operand1 = o1;
        op = o;
        operand2 = o2;
    }

    std::string toString() {
        return "EXP(" + std::to_string(operand1) + " " + op + " " + std::to_string(operand2) + ")";
    }
    
    int getOperand1() const;
    char getOperator() const;
    int getOperand2() const;

    int compare(Expression other) {
        if (operand1 == other.operand1 && op == other.op && operand2 == other.operand2) {
            return 0;
        } else if (operand1 < other.operand1 || (operand1 == other.operand1 && op < other.op) || (operand1 == other.operand1 && op == other.op && operand2 < other.operand2)) {
            return -1;
        } else {
            return 1;
        }
    }

    bool hasOneOperandTheSame(Expression other) {
        return (operand1 == other.operand1 || operand2 == other.operand2 || operand1 == other.operand2 || operand2 == other.operand1);
    }

    Expression* createDouble() {
        return new Expression(operand1 * 2, op, operand2 * 2);
    }
};

#endif
