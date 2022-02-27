#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int STARTER_BASE = 9;
    const int MAX_NUM = 10;

    srand(time(nullptr));

    for (int i = 0; i < STARTER_BASE; i++) {
        int x = rand()/((RAND_MAX + 1u)/MAX_NUM);
        cout << x << " ";
    }

    cout << endl;

    return 0;
}