#ifndef TODOTASK_H
#define TODOTASK_H

#include <string>

class TodoTask {
public:
    TodoTask(const std::string& name, int month, int day);

    std::string toString() const;

    bool isLater(const TodoTask& other) const;

    bool isOnTheSameDate(const TodoTask& other) const;

private:
    std::string taskName;
    int taskMonth;
    int taskDay;
};

#endif 
