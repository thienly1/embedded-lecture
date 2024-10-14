// header of class Person
#pragma once  // use this so when you implement code in other class you don't need to invoke #include and using namespace again
#include<iostream>

using namespace std;

class Person{
    private:
        string name;
        string ssn;
    
    public:
        Person();
        Person(string name, string ssn);

        string getPerson();

};