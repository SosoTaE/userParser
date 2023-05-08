#include <iostream>
#include "userparser.h"

using namespace std;

bool func(object data) {
    return data.get("id") == 5;
}

int main() {
    objectVector persons = readFileAndGetData("./users.txt", 7);
    writeFile("./new_users.txt", persons);
    persons.sort("years");
    print(persons);
    writeFile("./new_users.txt", persons);
    objectVector filteredPersons = persons.filter(func);
    print(filteredPersons);
    writeFile("./filteredUsers.txt", filteredPersons);
    print(filteredPersons);
    
}