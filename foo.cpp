#include <string>
#include <iostream>

using namespace std;

extern string hello;
extern int cont;

void write_extern(void){
    cout << "Count is: " << cont << endl;
}

void foo(void){
    extern int i;
    i = 100;
    hello = "World";
}

