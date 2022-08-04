#include <iostream>
#include <string>
using namespace std;




int main() {
    string hello = "Hello";
    char c = hello[1]; // e
    hello[0] = 'M';
    cout << hello << endl;
}


void a1() {
    string s1;
    string s2 = "Hello";
    string s3("Welcome");
    string s4(10, 'O');
    string s5 = s2;


    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
}

void a2() {
        // string s1 = "Hello";
    // string s2 = "world";
    // string s3 = s1 + " " + s2;
    // cout << s3 << endl;

    string s1 = "hello";
    string s2 = "efwerf";
    bool result = s1 != s2; // true
    cout << result << endl;

    result = s1 != "hello"; // false
    cout << result << endl;
    result = s2 != "werwfw"; // true
    cout << result << endl;

}


void a3() {
    string s1 = "hello";
    cout << s1.size() << endl;

    if (s1.empty())
        cout << "String is empty" << endl;
    else
        cout << "String is not empty" << endl;

}



void a4() {
    string name;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Your name : " << name << endl;

}