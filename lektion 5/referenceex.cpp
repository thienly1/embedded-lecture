#include<iostream>

using namespace std;

void swap (int&x, int &y){ // reference to x, y
    int a = x;
    x = y;
    y = a;
}

int main (){
    int num1 = 5;
    int num2 = 7;
    
    // num1 and num2 in swap() are reference to num1, num2 so if they are mutated, num1 och num2 are mutated as well 
    swap(num1, num2);
    cout << num1<< endl;  //7
    cout << num2 << endl;  //5

}