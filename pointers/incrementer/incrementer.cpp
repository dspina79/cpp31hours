#include <iostream>

using namespace std;

void increment(int* x, int incrementValue) {
    cout << "Incrementing value by " << incrementValue << endl;
    *x += incrementValue;
}

void printx(int x) {
    cout << "The value of x is " << x << endl;
}

int main() {
    int x = 10;
    printx(x);
    increment(&x, 5);
    printx(x);
    increment(&x, -12);
    printx(x);
    increment(&x, 30);
    printx(x);
 
    return 0;
}

/*
    Output

    The value of x is 10
    Incrementing value by 5
    The value of x is 15
    Incrementing value by -12
    The value of x is 3
    Incrementing value by 30
    The value of x is 33
*/