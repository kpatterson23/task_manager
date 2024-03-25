// Defines the structure of a task
#ifndef TASK_H
#define TASK_H

#include <string>
#include <ctime>

using namespace std;

struct Task {
    string name;
    string description;
    bool completed;
    time_t deadline;
};

#endif