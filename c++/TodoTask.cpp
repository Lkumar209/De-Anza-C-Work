#include "todotask.h"
#include <iostream>
#include <iomanip> 

TodoTask::TodoTask(const std::string& name, int month, int day) 
    : taskName(name), taskMonth(month), taskDay(day) {}

std::string TodoTask::toString() const {
    return "TASK(" + taskName + ") DATE(" + std::to_string(taskMonth) + "/" + std::to_string(taskDay) + ")";
}

bool TodoTask::isLater(const TodoTask& other) const {
    if (taskMonth > other.taskMonth) {
        return true;
    } else if (taskMonth < other.taskMonth) {
        return false;
    } else {
        return taskDay > other.taskDay;
    }
}

bool TodoTask::isOnTheSameDate(const TodoTask& other) const {
    return (taskMonth == other.taskMonth) && (taskDay == other.taskDay);
}


int main() {
    TodoTask task1("Final exam", 3, 28);
    TodoTask task2("Homework", 3, 30);
    TodoTask task3("Presentation", 4, 2);

    std::cout << task1.toString() << std::endl;
    std::cout << task2.toString() << std::endl;
    std::cout << task3.toString() << std::endl;

    std::cout << "Task 1 is later than Task 2: "<< std :: boolalpha << task1.isLater(task2) << std::endl;
    std::cout << "Task 2 is later than Task 3: " << std :: boolalpha << task2.isLater(task3) << std::endl;
    std::cout << "Task 1 and Task 2 are on the same date: " << std :: boolalpha << task1.isOnTheSameDate(task2) << std::endl;
    std::cout << "Task 2 and Task 3 are on the same date: " << std :: boolalpha << task2.isOnTheSameDate(task3) << std::endl;

    return 0;
}
