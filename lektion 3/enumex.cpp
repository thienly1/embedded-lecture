# include <iostream>
using namespace std;

typedef enum {
    monday,  //0
    tuesday,  //1
    wednesday,  //2
    thursday,  //3
    friday,   //4
    saturday,  //5
    sunday    //6
} WEEKDAY;

int main (){

    WEEKDAY currentDay = WEEKDAY::tuesday;

    if (currentDay == WEEKDAY::tuesday) {
        cout << "current day: tuesday" << endl;  //current day: tuesday
    }

    cout << "weekday: " << WEEKDAY::thursday <<endl;  // 3

    return 0;
}