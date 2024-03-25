#include <iostream>
#include "task.h"
#include "task_manager.hpp"

using namespace std;

int main() {

    TaskManager taskManager;
    string name = "";
    string description = "";
    char option;
    int deadline = 0;
    int taskIndex = -1;
    int choice;

    do {
        cout << "Task Manager Menu\n\n";
        cout << "1. Add Task\n2. Mark Task as Completed\n3. Display All Task\n0. To Exit the Program\n\n";
        cout << "Enter your choice (1, 2, 3, or 0): ";
        cin >> choice;
        cin.ignore(); // Ignores the newline character left in the input buffer
        cout << "\n";

        switch(choice) {
            case 1:
                // code to add a task
                cout << "Enter the name of your task: \n";
                getline(cin, name);
                cout << "Enter a description for your task: \n";
                getline(cin, description);
                cout << "Would you like to add a deadline (Y/N)? ";
                cin >> option;

                if (option == 'Y' || option == 'y') {
                    cout << "Enter a deadline for your task: \n";
                    cin >> deadline;
                }

                taskManager.addTask(name, description, false, deadline);
                cout << "\nTask has been added.\n" << "\n";
                break;

            case 2:
                // code to mark task as completed
                cout << "Which task would you like to mark as completed? ";
                cin >> taskIndex;
                taskManager.markTaskCompleted(taskIndex);
                break;

            case 3:
                // code to display all tasks
                taskManager.displayAllTasks();
                break;
                
            case 0:
                cout << "Exiting Task Manager...\n" << "\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n" << "\n";
        }
    } while (choice != 0);


    return 0;
}