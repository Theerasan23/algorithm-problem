#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main (){

    string p = "aaaaaa";
    string* ptr = &p;
    cout << ptr << ": " << *ptr << endl;
    string c = p;
    ptr = &c;
    cout << ptr << ": " << *ptr << endl;
    return 0;

}