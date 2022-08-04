#include <iostream>

using namespace std;


int array() {
    int numbers[4] = {1,2,3,4};
    // находим кол. элементов в массиве__
    int size = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }

    int numbers1[4] = {1,2,3,4};

    for (auto number: numbers1) {
        cout << number << endl;
    }


    return 0;
}

int main() {

    const int rows = 3, columns = 2;
    int numbers[rows][columns] = { {92,53}, {9,6}, {28, 31}};

    for(int i=0; i < rows; i++) {
        for (int j=0; j < columns; j++) {
            cout << numbers[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    for (auto &subnumbers : numbers) {
        for (int number : subnumbers) {
            cout << number << "\t";
        }
        cout << endl;
    }

    return 0;

}
