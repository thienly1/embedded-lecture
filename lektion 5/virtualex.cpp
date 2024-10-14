# include <iostream>
using namespace std;

class Shape {
    protected:
        int weight;
        int height;
    public:
        virtual int getArea() =0;
        void setWeight(int w){
            weight = w;
        }
        void setHeight(int h){
            height = h;
        }

};
class Rectangle: public Shape {
    public:
        int getArea(){
            return weight*height;
        }

};

int main (){
    Rectangle rec;
    rec.setHeight(5);
    rec.setWeight(7);
    cout << rec.getArea();

    return 0;
}