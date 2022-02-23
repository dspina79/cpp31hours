#include <iostream>

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
*/