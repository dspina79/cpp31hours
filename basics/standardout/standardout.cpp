#include <iostream>

int get_value() {
    return 3;
}

int add(int x, int y) {
    return x + y;
}

int factorial(int x) {
    if (x == 1) {
        return 1;
    }

    return x * factorial(x - 1);
}

void sayHello(std::string name) {
    std::cout << "Hello, " << name << std::endl;
}

int main() {
    int val = get_value();
    const int x = 3;
    const int y = 4;
    int sum = add(x, y);
    std::cout << "The value from the function is " << val << std::endl;
    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;
    std::cout << y << "! = " << factorial(y) << std::endl;
    sayHello("Dave");
    return 0;
}