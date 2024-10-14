# include <iostream>

using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(){};
        Person(string name, int age){
            this -> name = name;
            this -> age = age;
        }
        ~Person(){}      
}

~Person:: public Person(){
    delete 
}
