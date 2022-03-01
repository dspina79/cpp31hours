#include <iostream>

using namespace std;

void swap(int *x, int *y) {
    int temp = *x; // int address
    *x = *y;
    *y = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "x is " << x << " and y is " << y << "." << endl;
    cout << "SWAPPING..." << endl;
    swap(&x, &y);
    cout << "x is " << x << " and y is " << y << "." << endl;
    
    return 0;
}

/* 
    Output
  
    x is 10 and y is 20.
    SWAPPING...
    x is 20 and y is 10.
*/