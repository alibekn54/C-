#include <iostream>
using namespace std;

int main() {
    string color;
    color = "black";
    
    if (color == "green") {
        cout << "Go!" << endl;
    } else if (color == "yellow") {
        cout << "Wait !" << endl;
    } else if (color == "red") {
        cout << "stop !" << endl;
    } else {
        cout << "incorrect color" << endl;
    }
    

    int dayOfWeek;
    // cin >> dayOfWeek;
    dayOfWeek = 7;
    switch (dayOfWeek) {
        case 1:
            cout << "monday" << endl;
            break; // выход
        case 2:
            cout << "tuesday" << endl;
            break; // выход
        case 3:
            cout << "wednesday" << endl;
            break; // выход
        case 4:
            cout << "thursday" << endl;
            break; // выход
        case 5:
            cout << "friday" << endl;
            break; // выход
        case 6:
            cout << "saturday" << endl;
            break; // выход
        case 7:
            cout << "sunday" << endl;
            break; // выход

        default:
            cout << "[ Incorrect !DAY! ]";
            break;
    }

    int n;
    cin >> n;
    if (n >= 10 && n <= 20) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}