#ifndef GETEXPRESSIONANDITSDOUBLE_H
#define GETEXPRESSIONANDITSDOUBLE_H

class Expression {
private:
    int operand1;
    int operand2;
    char op;

public:
    Expression(int o1, int o2, char operation);
    int getOperand1() const;
    int getOperand2() const;
    char getOperator() const;
};

Expression* getExpressionAndItsDouble(int o1, int o2, char operation);

#endif  


