#include <iostream>

int get_value() {
    return 3;
}

int add(int x, int y) {
    return x + y;
}

int main() {
    int val = get_value();
    const int x = 3;
    const int y = 4;
    int sum = add(x, y);
    std::cout << "The value from the function is " << val << std::endl;
    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;
    return 0;
}