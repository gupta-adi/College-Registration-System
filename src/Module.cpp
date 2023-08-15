#include "Module.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;



Module::Module(const string& id, const string& name) : moduleId(id), moduleName(name) {}

string Module::getId(){
    return moduleId;
}

string Module::getName(){
    return moduleName;
}

void Module::setName(const string& newName) {
    moduleName = newName;
}