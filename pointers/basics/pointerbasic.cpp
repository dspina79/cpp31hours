#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int* xptr = &x;

    cout << "The address of x is " << xptr << " and the value is " << x << endl;
    return 0;
}

/*
    Sample Output
    The address of x is 0x7ffee63e86c8 and the value is 10
*/