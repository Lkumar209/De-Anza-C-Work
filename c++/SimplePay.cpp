

#include "simplepay.h"
#include <iostream>

SimplePay::SimplePay(int h, double r) {
    hours = h;
    pay_rate = r;
}

std::string SimplePay::toString() {
    double pay_amount = (hours > 40) ? (40 * pay_rate + (hours - 40) * 1.5 * pay_rate) : (hours * pay_rate);
    return "HOURS(" + std::to_string(hours) + ") PAY-RATE($" + std::to_string(pay_rate) + ") PAY-AMOUNT($" + std::to_string(pay_amount) + ")";
}

bool SimplePay::payMore(SimplePay& other) {
    double pay_amount = (hours > 40) ? (40 * pay_rate + (hours - 40) * 1.5 * pay_rate) : (hours * pay_rate);
    double other_pay_amount = (other.hours > 40) ? (40 * other.pay_rate + (other.hours - 40) * 1.5 * other.pay_rate) : (other.hours * other.pay_rate);
    return pay_amount > other_pay_amount;
}



int main() {
     // Tested with 40 hours and 10 dollars per hour and 60 hours and 10 dollars per hour, with the comparison returning true.

    SimplePay pay1(40, 10);
    SimplePay pay2(60, 10);

    std::cout << pay1.toString() << std::endl;
    std::cout << pay2.toString() << std::endl;

    std::cout << "Does pay2 pay more than pay1? : " << (pay2.payMore(pay1) ? "true" : "false") << std::endl;

    return 0;
}
