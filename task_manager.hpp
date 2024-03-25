#ifndef TASK_MANAGER_HPP
#define TASK_MANAGER_HPP

#include <vector>
#include "task.h"

using namespace std;

class TaskManager {
    private:
        vector<Task> tasks;

    public:
        void addTask(const string& name, const string& description, bool completed = false, time_t deadline = 0);
        void markTaskCompleted(int index);
        void displayAllTasks() const;
};

#endif