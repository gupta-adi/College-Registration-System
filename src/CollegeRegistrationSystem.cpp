
#include "CollegeRegistrationSystem.h"

#include <iostream>
#include <string>
#include <map>

using namespace std;


void CollegeRegistrationSystem::addStudent(const string& id, const string& name, const string& date, const string& fname, const string& level) {
    if (students.find(id)!=students.end()){
        cout << "Cannot add Student. Student with the same ID already exists.\n";
    }
    else{
        students.emplace(id, Student(id, name, date, fname, level));
        cout << "Student Added Successfully\n";
    }
}

void CollegeRegistrationSystem::updateStudentRecord(const string& id, const string& newName, const string& newDOA, const string& newFather, const string& newLevel) {
    auto it = students.find(id);
    if (it != students.end()) {
        if(!newName.empty())
        it->second.setName(newName);
        if(!newDOA.empty())
        it->second.setDOA(newDOA);
        if(!newFather.empty())
        it->second.setFatherName(newFather);
        if(!newLevel.empty())
        it->second.setLevel(newLevel);
    }
}

void CollegeRegistrationSystem::displayStudentRecord(const string& id) {
    auto it = students.find(id);
    if (it != students.end()) {
        Student& student = it->second;
        cout << "---------------------------\n\n";
        cout << "Student ID: " << student.getId() << "\n";
        cout << "Student Name: " << student.getName() << "\n";
        cout << "Student Date of Admission: " << student.getDOA() << "\n";
        cout << "Student's Father's Name: " << student.getFatherName() << "\n";
        cout << "Student Level: " << student.getLevel() << "\n\n";
        cout << "---------------------------\n\n";
    }
    else{
        cout << "Student not found.\n";
    }
    
}

void CollegeRegistrationSystem::displayAllStudentRecords() {
    for (auto& pair : students) {
        Student& student = pair.second;
        cout << "---------------------------\n\n";
        cout << "Student ID: " << student.getId() << "\n";
        cout << "Student Name: " << student.getName() << "\n";
        cout << "Student Date of Admission: " << student.getDOA() << "\n";
        cout << "Student's Father's Name: " << student.getFatherName() << "\n";
        cout << "Student Level: " << student.getLevel() << "\n\n";
    }
    cout << "---------------------------\n\n";
}

void CollegeRegistrationSystem::addModule(const string& id, const string& name) {
    if (modules.find(id)!=modules.end()){
        cout << "Cannot add Module. Module with the same ID already exists.\n";
    }
    else{
        modules.emplace(id, Module(id, name));
        cout << "Module Added Successfully\n";
    }
}

void CollegeRegistrationSystem::updateModule(const string& id, const string& newName) {
    auto it = modules.find(id);
    if (it != modules.end()) {
        it->second.setName(newName);
    }
}

void CollegeRegistrationSystem::displayModuleInfo(const string& id) {
    auto it = modules.find(id);
    if (it != modules.end()) {
        Module& module = it->second;
        cout << "---------------------------\n\n";
        cout << "Module ID: " << module.getId() << "\n";
        cout << "Module Name: " << module.getName() << "\n\n";
        cout << "---------------------------\n\n";
    }
    else{
        cout << "Module not found.\n";
    }
}

void CollegeRegistrationSystem::displayAllModuleInfo() {
    for (auto& pair : modules) {
        Module& module = pair.second;
        cout << "---------------------------\n\n";
        cout << "Module ID: " << module.getId() << "\n";
        cout << "Module Name: " << module.getName() << "\n\n";
    }
    cout << "---------------------------\n\n";
}