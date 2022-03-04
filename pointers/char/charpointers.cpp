#include <iostream>

using namespace std;

void incrementArray(int* arr, int arrsize, int incrementval) {
    for (int i = 0; i < arrsize; i++) {
        arr[i] += incrementval;
    }
}

void printArray(int* arr, int arrsize) {
    for (int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    cout << "Original array:" << endl;
    printArray(arr, 6);
    incrementArray(arr, 6, 4);
    cout << "Modified array:" << endl;
    printArray(arr, 6);
    return 0;
}