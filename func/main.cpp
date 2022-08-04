#include <iostream>
#include <string>
using namespace std;

void square(int);
void display(string, int);
void multiply(int n, int m = 3);



void multiply(int n, int m) {
    int res = n * m;
    cout << "n * m = " << res << endl; 
}

int main() {
    display("Tom", 33);
    square(4.56);
    return 0;
}

void square(int x) {
    cout << "Square of " << x << " is equal to " << x * x << endl;
}

void display(string name, int age) {
    cout << "Name : " << name << "\tAge: " << age << endl;
}


