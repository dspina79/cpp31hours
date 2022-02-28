#include <iostream>
#include <string>

using namespace std;

int main() {
    int x = 10;
    int y = 50;
    string name = "Dean";
    char person[7] = {'H', 'a', 'r', 'r', 'i', 'e', 't'};

    // conditions

    if (x >= y) {
        cout << "x is greater than or equal to y" << endl;
    } else {
        cout << "x is less than y" << endl;
    }

    // for loops
    for (int i = 0; i < x; i++) {
        cout << (i + 1) << " ";
    }
    cout << endl;

    for (int j = 0; j < 7; j++) {
        cout << person[j];
    }
    cout << endl;

    // while loops
    int v = 13;
    while (v > x) {
        cout << "The value of v is: " << v << endl;
        v--;
    }

    // do/while
    do {
        cout << "This will print out no matter what..." << endl;
    } while(false);
}

/* 
    Output:
    x is less than y
    1 2 3 4 5 6 7 8 9 10 
    Harriet
    The value of v is: 13
    The value of v is: 12
    The value of v is: 11
    This will print out no matter what...
*/