#include <iostream>
#include "userparser.h"

using namespace std;


int main() {
    objectVector persons = readFileAndGetData("./users.txt", 4);
    writeFile("./new_users.txt", persons);
    persons.sort("name", true);
    print(persons);
}