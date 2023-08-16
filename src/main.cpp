#include "CollegeRegistrationSystem.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    CollegeRegistrationSystem system;
    
    string choice;
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
        cin >> choice ;
        if(choice[1]!='\0'){
            choice="0";
        }
        switch (choice[0]) {
            case '1': {
                system.addStudent();
                break;
            }
            case '2': {
                system.updateStudentRecord();
                break;
            }
            case '3': {
                string id;
                cout << "Enter Student ID: ";
                getline(cin >> ws, id);
                system.displayStudentRecord(id);
                break;
            }
            case '4': {
                system.displayAllStudentRecords();
                break;
            }
            case '5': {
                
                system.addModule();
                break;
            }
            case '6': {
                
                system.updateModule();
                break;
            }
            case '7': {
                string id;
                cout << "Enter Module ID: ";
                getline(cin >> ws, id);
                system.displayModuleInfo(id);
                break;
            }
            case '8': {
                system.displayAllModuleInfo();
                break;
            }
            case '9': {
                cout << "Exiting the system. Goodbye!\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice[0] != '9');

    return 0;
}
