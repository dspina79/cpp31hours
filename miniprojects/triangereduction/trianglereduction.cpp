#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;

void printarray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    const int STARTER_BASE = 9;
    int currentBase = STARTER_BASE;
    const int MAX_NUM = 10;
    int collection[STARTER_BASE];

    srand(time(nullptr));

    for (int i = 0; i < STARTER_BASE; i++) {
        int x = rand()/((RAND_MAX + 1u)/MAX_NUM);
        // found that the first number was always 0
        if (i == 0 && x == 0) {
            x = rand()/((RAND_MAX + 1u)/MAX_NUM);
        }
        collection[i] = x;
    }

    printarray(collection, STARTER_BASE);
    
    while(currentBase > 1) {
        int tempCollection[currentBase--];
        for (int i = 0; i < currentBase; i++) {
            tempCollection[i] = abs(collection[i] - collection[i+1]);
        }
        
        for (int i = 0; i < currentBase; i++) {
            collection[i] = tempCollection[i];
        }
        
        printarray(collection, currentBase);
    }
    
    return 0;
}