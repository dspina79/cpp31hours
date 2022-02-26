#include <iostream>

int get_max(int x, int y) {
    // using ternary operator
    return x > y ? x : y;
}

int main() {
    int x = 10;
    int y = 20;

    if (x > 1) {
        std::cout << "x is greater than 1" << std::endl;
    }

    if (x > y) {
        std::cout << "x is greater than y" << std::endl;
    } else {
        std::cout << "x is not greater than y" << std::endl;
    }

    if (x == x) {
        std::cout << "x is equal to itself" << std::endl;
    }

    if (x > 1 && x < y) {
        std::cout << "x is greater than 1 and less than y" << std::endl;
    } else {
        std::cout << "The statement is not true" << std::endl;
    }

    if (x > 1 || x > y) {
        std::cout << "x is greater than 1 or it is greater than y" << std::endl;
        if (x % 2 == 0) {
            std::cout << "x is even" << std::endl;
        } else {
            std::cout << "x is odd" << std::endl;
        }
    }

    const int a = 15;
    const int b = 102;
    const int max_a_b = get_max(a, b);

    std::cout << "The max of " << a << " and " << b << " is " << max_a_b << std::endl;

    return 0;
}

/* 
    Outputs:
        x is greater than 1
        x is not greater than y
        x is equal to itself
        x is greater than 1 and less than y
        x is greater than 1 or it is greater than y
        x is even
        The max of 15 and 102 is 102
*/