#ifndef TASK_MANAGER_CPP
#define TASK_MANAGER_CPP

#include <iostream>
#include "task_manager.hpp"

using namespace std;

void TaskManager::addTask(const string& name, const string& description, bool completed, time_t deadline) {
    tasks.push_back({name, description, completed, deadline}); // Adds a new task
}

void TaskManager::markTaskCompleted(int index) {
    if (index >= 0 && index < tasks.size()) { // Checks for valid index
        tasks[index - 1].completed = true; // Modifies the completed field of the task
        cout << "\nTask marked as completed.\n";
        cout << "\n";
    } else {
        cerr << "Invalid index\n"; // Handles invalid index
        cout << "\n";
    }
}

void TaskManager::displayAllTasks() const {
    for (Task task: tasks) { // Displays all task via looping
        cout << "Name: " << task.name << "\n";
        cout << "Description: " << task.description << "\n";
        cout << "Completed: " << (task.completed ? "true" : "false") << "\n"; // Outputs true or false as a string
        cout << "Deadline: " << (task.deadline != 0 ? to_string(task.deadline) : "None"); // Outputs None if the deadline is 0
        cout << "\n";
        cout << "\n";
    }
}

#endif