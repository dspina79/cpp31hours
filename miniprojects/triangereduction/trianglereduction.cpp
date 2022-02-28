#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>
#include <string>

using namespace std;

void printarray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void runTriangle(int starterBaseSize) {
    int currentBase = starterBaseSize;
    const int MAX_NUM = 10;
    int collection[currentBase];

    srand(time(nullptr));

    for (int i = 0; i < starterBaseSize; i++) {
        int x = rand()/((RAND_MAX + 1u)/MAX_NUM);
        // found that the first number was always 0
        if (i == 0 && x == 0) {
            x = rand()/((RAND_MAX + 1u)/MAX_NUM);
        }
        collection[i] = x;
    }

    printarray(collection, starterBaseSize);
    
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
}

int main() {
    string strStarterVal;
    cout << "Enter a starter base size: ";
    getline(cin, strStarterVal);
    int starterSize = stoi(strStarterVal);
    runTriangle(starterSize);
    return 0;
}