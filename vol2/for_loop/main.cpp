#include <iostream>
using namespace std;

int main() {
    // for (int i = 0; i <= 3; i++) {
    //     cout << i << " = Hello" << endl;
    // }

    // int i = 100;
    // while (i > 0) {
    //     cout << i << " = Hello" << endl;
    //     i-=10;
    // }

    // int j = 0;
    // do {
    //     cout << j << "first doing" << endl;
    //     j++;
    // }
    // while (j > 0);


    // int amount, year, procent;
    // cout << "Insert amount , year, procent" << endl;
    // cin >> amount >> year >> procent;
    // for(int i = 1; i <= year; i++) {
    //     amount += amount * procent/100;
    //     cout << i << " year - " << amount << endl;
    // }
    // cout << "Total amount : " << endl; 


    // int a, b;
    // cout << "Insert a, b" << endl;
    // cin >> a >> b;
    // int x = 0;
    // int result = 0;
    // while (x < b) {
    //     result += a;
    //     x++;
    // } 

    // cout << "Result " << result << endl;
    
    // return 0;













    int a, b, x = 0, result = 0;
    cout << "Insert a, b" << endl;
    // cin >> a >> b;
    a = 3;
    b = 4;
    while (x < b) {
       result += a;
        x++;
    }

    cout << "Result : " << result << endl;


    int res = 1, factorial = 5;
    // cin >> factorial;
    for (int i = 1; i <= factorial; i++) {
        res *= i;
        cout << i << ": " << res/i << "*" << i << "=" << res << endl;
    }

    cout << "Factorial: " << res << endl;


    int mt_num;
    cin >> mt_num;
    int i = 1;
    while (i <= 10) {
        cout << i << " * " << mt_num << " = " << i * mt_num << endl;
        i++;
    }



    int mt_num_2;
    cin >> mt_num_2;
    for(int i = 1; i <= 10; i++) {
        cout << mt_num_2 << " * " << i << " = " << i * mt_num_2 << endl;
    }


    return 0;
}