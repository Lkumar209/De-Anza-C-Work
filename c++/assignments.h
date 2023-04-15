#ifndef ASSIGNMENTS_H
#define ASSIGNMENTS_H

#include <string>
#include <vector>

class Assignment {
public:
    Assignment(std::string variable, int value) : variable(variable), value(value) {}

    std::string variable;
    int value;

    std::string toString() const;
};

bool is_valid_variable_name(std::string variable);

bool add_assignment(std::vector<Assignment>& assignments, std::string input);

void list_assignments(const std::vector<Assignment>& assignments);

void print_stats(const std::vector<Assignment>& assignments);

#endif
