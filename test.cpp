#include <iostream>
#include "tools.h" 

using namespace std;

bool func(object data) {
    return data.get("code") == "ABC123";
}

datatype reduceCallBack(object data, datatype b) {
    datatype price = data.get("price");
    datatype result = price + b;
    return result;
}



int main() {
    objectVector products = readFileAndGetData("./productList.txt", 3);
    objectVector providers = readFileAndGetData("./providerList.txt", 3);
    objectVector filtered = products.filter(func);
    print(filtered);
    datatype c;
    c = 0;
    datatype sum = filtered.reduce(reduceCallBack,c);
    print(sum);
    writeFile("./sum.txt", sum);
    writeFile("./filtered.txt", filtered);
}