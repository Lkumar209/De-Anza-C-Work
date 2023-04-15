#ifndef SIMPLEPAY_H
#define SIMPLEPAY_H

#include <string>

class SimplePay {
    int hours;
    double pay_rate;

public:
    SimplePay(int h, double r);
    std::string toString();
    bool payMore(SimplePay& other);
};

#endif
