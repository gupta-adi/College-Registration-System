#include "CollegeRegistrationSystem.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    CollegeRegistrationSystem system;

    int choice;
    do {
        cout << "\nCollege Registration System Menu\n";
        cout << "1. Add Student\n";
        cout << "2. Update Student Record\n";
        cout << "3. Display Student Record\n";
        cout << "4. Display All Student Records\n";
        cout << "5. Add Module\n";
        cout << "6. Update Module Info\n";
        cout << "7. Display Module Info\n";
        cout << "8. Display All Module Info\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string id, name;
                cout << "Enter Student ID: ";
                cin >> id;
                cout << "Enter Student Name: ";
                cin >> name;
                system.addStudent(id, name);
                break;
            }
            case 2: {
                string id, newName;
                cout << "Enter Student ID: ";
                cin >> id;
                cout << "Enter New Student Name: ";
                cin >> newName;
                system.updateStudentRecord(id, newName);
                break;
            }
            case 3: {
                string id;
                cout << "Enter Student ID: ";
                cin >> id;
                system.displayStudentRecord(id);
                break;
            }
            case 4: {
                system.displayAllStudentRecords();
                break;
            }
            case 5: {
                string id, name;
                cout << "Enter Module ID: ";
                cin >> id;
                cout << "Enter Module Name: ";
                cin >> name;
                system.addModule(id, name);
                break;
            }
            case 6: {
                string id, newName;
                cout << "Enter Module ID: ";
                cin >> id;
                cout << "Enter New Module Name: ";
                cin >> newName;
                system.updateModule(id, newName);
                break;
            }
            case 7: {
                string id;
                cout << "Enter Module ID: ";
                cin >> id;
                system.displayModuleInfo(id);
                break;
            }
            case 8: {
                system.displayAllModuleInfo();
                break;
            }
            case 9: {
                cout << "Exiting the system. Goodbye!\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice != 9);

    return 0;
}
