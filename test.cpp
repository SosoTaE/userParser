#include <iostream>
#include "userparser.h"

using namespace std;

bool func(object data) {
    datatype each = data.get("id");
    return each.integerValue > 3;
}

int main() {
    objectVector persons = readFileAndGetData("./users.txt", 4);
    print(persons);
    cout<<endl<<;
    print(persons.filter(func));
}