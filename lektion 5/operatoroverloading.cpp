#include <iostream>
using namespace std;


class Vector {
        
    public:
        int x;
        int y;
        Vector () {};
        Vector (int x, int y){
            this-> x = x;
            this ->y = y;
        }
        Vector operator+(Vector v){
            Vector v1;
            v1.x = this ->x + v.x;
            v1.y = this ->y + v.y;
            return v1;
        }
        string ToString(){
            return "(X:Y)= (" + to_string(x)+ ":" + to_string(y) + ")";
        }
};

void printVector(Vector v1){
    cout << "(X:Y) " << "(" << v1.x << ":" << v1.y << ")" << endl;
}

inline void vectorMaths(Vector & v){
    v.x = v.x <<1;
    v.y = v.y <<1;
}

void vectorMaths(Vector *v){
    v ->x = v ->x*2;
    v ->y = v->y*2;
}

int main(){
    /*
    Vector v1(2,3),v2(5,-1), v3;
    v3 = v1+v2;
    cout<< v3.ToString()<<endl; //(X:Y)= (7:2)
*/
    int a = 8;
    int b = 8;

    a = a/2;
    b = b >> 1;
    cout << a << endl; //4
    cout << b << endl; //4 -> from 0000 1000 >> 0000 0100
    
    a = a*2; //8
    b = b<< 1; //8
    cout << a << endl;
    cout << b << endl;

    a = a*4;  //32
    b = b << 2; //32 : from 0000 1000 <<0010 0000 :32
    cout << a << endl;
    cout << b << endl;
    cout << "================================" << endl;

    int x = 2;      // 0000 0010
    int y = 0;      // 0000 0101
    int* df = &x;
    cout << x << " & " << y << ":  " << ((x & y) ? "true" : "false") << endl; //false
    cout << x << " && " << y << ": " << ((x && y) ? "true" : "false") << endl; //true
    cout << (x&y) <<endl;
    cout <<(x && y) <<endl;

    Vector v1(2,3);
    Vector v2(3,-4);

    printVector(v1); // (2,3)
    printVector(v2); // (3,-4)

    vectorMaths(v1); //(4,6)
    vectorMaths(v2);  //(6,-8)
    
    vectorMaths(&v1); //(8,12)
    
    printVector(v1); //(8,12)
    printVector(v2); //(6,-8)

    return 0;
}