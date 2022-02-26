#include <iostream>

int main() {
    int xi = 1;
    float xf = 1.12345678901;
    double xd = 1.12345678901;
    long double xld = 1.12345678901;

    std::cout << "Size of int = " << sizeof(xi) << std::endl;
    std::cout << "Size of float = " << sizeof(xf) << std::endl;
    std::cout << "Size of double = " << sizeof(xd) << std::endl;
    std::cout << "Size of long double = " << sizeof(xld) << std::endl;

    return 0;
}

/* 

    Outputs:
        Size of int = 4
        Size of float = 4
        Size of double = 8
        Size of long double = 16
*/