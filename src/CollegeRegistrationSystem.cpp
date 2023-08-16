
#include "CollegeRegistrationSystem.h"

#include <iostream>
#include <string>
#include <map>

using namespace std;

void CollegeRegistrationSystem::addStudent()
{
    string id, name, date, fname, level;
    cout << "Enter Student ID: ";
    getline(cin >> ws, id) ;
    
    if (students.find(id) != students.end())
    {
        cout << "\nCannot add Student. Student with the same ID already exists.\n";
    }
    else
    {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name) ;
        cout << "Enter Student Date of Admission: ";
        getline(cin >> ws, date) ;
        cout << "Enter Student's Father's Name: ";
        getline(cin >> ws, fname) ;
        cout << "Enter Student Level (UG/PG): ";
        getline(cin >> ws, level) ;
        students.emplace(id, Student(id, name, date, fname, level));
        cout << "\nStudent Added Successfully\n";
    }
}

void CollegeRegistrationSystem::updateStudentRecord()
{
    string id, newName, newDOA, newLevel, newFather;
    if (students.empty())
    {
        cout << "\nNo Student Record exist\n";
    }
    else
    {
        cout << "Enter Student ID: ";
        getline(cin >> ws, id);
        auto it = students.find(id);
        if (it == students.end())
        {
            cout << "\nStudent Record doesn't exist\n";
        }
        else
        {
            cout << "Enter New Student Name: ";
            getline(cin, newName);
            cout << "Enter New Student DOA: ";
            getline(cin, newDOA);
            cout << "Enter New Student's Father's Name: ";
            getline(cin, newFather);
            cout << "Enter Student Level (UG/PG): ";
            getline(cin, newLevel);
            if (!newName.empty())
                it->second.setName(newName);
            if (!newDOA.empty())
                it->second.setDOA(newDOA);
            if (!newFather.empty())
                it->second.setFatherName(newFather);
            if (!newLevel.empty())
                it->second.setLevel(newLevel);
        }
    }
}

void CollegeRegistrationSystem::displayStudentRecord(const string &id)
{
    auto it = students.find(id);
    if (it != students.end())
    {
        Student &student = it->second;
        cout << "---------------------------\n\n";
        cout << "Student ID: " << student.getId() << "\n";
        cout << "Student Name: " << student.getName() << "\n";
        cout << "Student Date of Admission: " << student.getDOA() << "\n";
        cout << "Student's Father's Name: " << student.getFatherName() << "\n";
        cout << "Student Level: " << student.getLevel() << "\n\n";
        cout << "---------------------------\n\n";
    }
    else
    {
        cout << "Student not found.\n";
    }
}

void CollegeRegistrationSystem::displayAllStudentRecords()
{
    for (auto &pair : students)
    {
        Student &student = pair.second;
        cout << "---------------------------\n\n";
        cout << "Student ID: " << student.getId() << "\n";
        cout << "Student Name: " << student.getName() << "\n";
        cout << "Student Date of Admission: " << student.getDOA() << "\n";
        cout << "Student's Father's Name: " << student.getFatherName() << "\n";
        cout << "Student Level: " << student.getLevel() << "\n\n";
    }
    cout << "---------------------------\n\n";
}

void CollegeRegistrationSystem::addModule(const string &id, const string &name)
{
    if (modules.find(id) != modules.end())
    {
        cout << "Cannot add Module. Module with the same ID already exists.\n";
    }
    else
    {
        modules.emplace(id, Module(id, name));
        cout << "Module Added Successfully\n";
    }
}

void CollegeRegistrationSystem::updateModule(const string &id, const string &newName)
{
    auto it = modules.find(id);
    if (it != modules.end())
    {
        it->second.setName(newName);
    }
    else
    {
        cout << "\nModule Record doesn't exist\n";
    }
}

void CollegeRegistrationSystem::displayModuleInfo(const string &id)
{
    auto it = modules.find(id);
    if (it != modules.end())
    {
        Module &module = it->second;
        cout << "---------------------------\n\n";
        cout << "Module ID: " << module.getId() << "\n";
        cout << "Module Name: " << module.getName() << "\n\n";
        cout << "---------------------------\n\n";
    }
    else
    {
        cout << "\nModule not found.\n";
    }
}

void CollegeRegistrationSystem::displayAllModuleInfo()
{
    for (auto &pair : modules)
    {
        Module &module = pair.second;
        cout << "---------------------------\n\n";
        cout << "Module ID: " << module.getId() << "\n";
        cout << "Module Name: " << module.getName() << "\n\n";
    }
    cout << "---------------------------\n\n";
}