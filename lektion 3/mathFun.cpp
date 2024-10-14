#include <iostream>
using namespace std;

#include "mathHelperFun.h"
//#include "mathHelperFun.cpp"

int main(){
    int a = 10;
    int b = 20;
    int8_t var = 165;

    int addition = add(a,b);
    cout << addition << endl;

    int subtraction = sub(a,b);
    cout << subtraction << endl;

    float quot1 = division(a, b);
    cout << quot1 << endl;

    float quot2 = division(a, (float)b);
    cout << quot2 << endl;

    cerr << " ERROR: något?" << endl;

    cout << incrementAge()<<endl;  //1
    cout << incrementAge()<<endl;   //2
    cout << incrementAge()<<endl;   //3
    cout << incrementAge()<<endl;   //4

    cout << PI << endl;
}
