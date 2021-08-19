#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <string>

using namespace std;

int i = 5;
string hello;

int cont;

void foo(void);

extern void write_extern();

int main(){
    setlocale(LC_ALL, "");
    cout << i << endl;
    cout << hello << endl;
    cont = 5;
    foo();
    cout << i << endl;
    cout << hello << endl;

    write_extern();

    return 0;

}
