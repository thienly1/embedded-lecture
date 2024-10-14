# include <iostream>

using namespace std;

class Person{
    private:
        string name;
        int age;
        int weight;
    public:
        Person(){
            cout<< " running default constructor!"<< endl;
        }
        Person(string n, int a, int w){
            this ->name = n;
            this ->age = a;
            this ->weight= w;
            cout<< "running params constructor!" << endl;
        }
        ~Person(){
            cout<<"destructor is running!" << endl;
        }

        void setName(string na){
            name = na;
        }
        void setAge(int realAge){
            if (realAge <0)
                realAge=0;
            if (realAge > 120)
                realAge = 120;
            age = realAge;            
        }
        void setWeight(int w){
            weight = w;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        int getWeight(){
            return weight;
        }
        void printPerson(){
            cout << name << " is " << age << " years old and " << weight << " kg;"<< endl;
        }    
        
};

void testFunction(){
            cout<< "inside testFunction: " << endl;
            Person p("Ly", 25, 50);
            cout << "we are now runnign some code" << endl;
}

int main(){
    Person p2("Mai", 4, 13);
    p2.printPerson();
    p2.setName("Lan");
    p2.printPerson();

    testFunction();

    return 0;    
}
