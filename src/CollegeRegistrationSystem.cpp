
#include "CollegeRegistrationSystem.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


void CollegeRegistrationSystem::addStudent(const string& id, const string& name) {
    bool exist = false;
    for (Student& student : students){
        if(student.getId() == id) {
            cout << "Cannot add Student. Student with the same ID already exists.\n";
            exist = true;
            break;
        }
    }
    if(!exist){
        students.emplace_back(id, name);
    }
}

void CollegeRegistrationSystem::updateStudentRecord(const string& id, const string& newName) {
    for (Student& student : students) {
        if (student.getId() == id) {
            student.setName(newName);
            break;
        }
    }
}

void CollegeRegistrationSystem::displayStudentRecord(const string& id) {
    for ( Student& student : students) {
        if (student.getId() == id) {
            cout << "---------------------------\n\n";
            cout << "Student ID: " << student.getId() << "\n";
            cout << "Student Name: " << student.getName() << "\n\n";
            cout << "---------------------------\n\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void CollegeRegistrationSystem::displayAllStudentRecords() {
    for ( Student& student : students) {
        cout << "---------------------------\n\n";
        cout << "Student ID: " << student.getId() << "\n";
        cout << "Student Name: " << student.getName() << "\n\n";
    }
    cout << "---------------------------\n\n";
}

void CollegeRegistrationSystem::addModule(const string& id, const string& name) {
    bool exist = false;
    for ( Module& module : modules){
        if(module.getId() == id) {
            cout << "Cannot add Module. Module with the same ID already exists.\n";
            exist = true;
            break;
        }
    }
    if(!exist){
        modules.emplace_back(id, name);
    }
}

void CollegeRegistrationSystem::updateModule(const string& id, const string& newName) {
    for (Module& module : modules) {
        if (module.getId() == id) {
            module.setName(newName);
            break;
        }
    }
}

void CollegeRegistrationSystem::displayModuleInfo(const string& id) {
    for ( Module& module : modules) {
        if (module.getId() == id) {
            cout << "---------------------------\n\n";
            cout << "Module ID: " << module.getId() << "\n";
            cout << "Module Name: " << module.getName() << "\n\n";
            cout << "---------------------------\n\n";
            return;
        }
    }
    cout << "Module not found.\n";
}

void CollegeRegistrationSystem::displayAllModuleInfo() {
    for (Module& module : modules) {
        cout << "---------------------------\n\n";
        cout << "Module ID: " << module.getId() << "\n";
        cout << "Module Name: " << module.getName() << "\n\n";
    }
    cout << "---------------------------\n\n";
}