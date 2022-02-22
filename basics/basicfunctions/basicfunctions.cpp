#include <iostream>

float divide(int numerator, int denomenator) {
    return (float)numerator / (float)denomenator;
}

void greet(std::string name) {
    std::cout << "Hello, " << name << std::endl;
}

// demonstrates recursion
int factorial(int x) {
    if (x < 1) {
        return 0;
    }

    if (x == 1) {
        return 1;
    }

    return x * factorial(x - 1);
}

int main() {
    greet("Dean");
    int x = 5;
    int y = 39;
    float quotient = divide(x, y);
    int factX = factorial(x);
    std::cout << "The quotient of " << x << " and  " << y << " is  " << quotient << std::endl;
    std::cout << x << "! = " << factX << std::endl;

    /*
        outputs:
        Hello, Dean
        The quotient of 5 and  39 is  0.128205
        5! = 120
    */
}