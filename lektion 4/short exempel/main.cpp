// using Person, Car, Driver in the code
#include<iostream>
#include <cstring>

#include "car.cpp"
#include "driver.cpp"
#include "person.cpp"

using namespace std;

int main(int argc, char * argv[]){  //command line arguments
    string name = argv[1];
    string fname = argv[2];
    string fullName = name + " " + fname;
    cout <<"argc: " << argc << endl;
    cout << "argv[0]: " << argv[0] << endl;
    cout<< name << endl;
    cout << fname << endl;

    Person lyTa(fullName, "7896-4356");
    Car bil("NUG076", "Toyota", "EX90");
    Driver lt(lyTa, bil);
    cout<< lt.getDriver() << endl;    
}