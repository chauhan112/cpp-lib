#include <iostream>

int main() {
    int a = 10, b = 3;

    // Arithmetic
    std::cout << "a + b = " << (a + b) << std::endl;     // 13
    std::cout << "a - b = " << (a - b) << std::endl;     // 7
    std::cout << "a * b = " << (a * b) << std::endl;     // 30
    std::cout << "a / b = " << (a / b) << std::endl;     // 3 (integer division)
    std::cout << "a % b = " << (a % b) << std::endl;     // 1 (remainder)

    // Relational
    std::cout << "a == b: " << (a == b) << std::endl;    // 0 (false)
    std::cout << "a > b: " << (a > b) << std::endl;     // 1 (true)

    // Logical
    bool condition1 = (a > 5);
    bool condition2 = (b < 5);
    std::cout << "condition1 && condition2: " << (condition1 && condition2) << std::endl; // 1 (true)
    std::cout << "condition1 || condition2: " << (condition1 || condition2) << std::endl; // 1 (true)
    std::cout << "!condition1: " << (!condition1) << std::endl; // 0 (false)

    // Assignment
    int x = 5;
    x += 3; // x is now 8
    std::cout << "x after += 3: " << x << std::endl;

    // Increment/Decrement
    int y = 5;
    std::cout << "Prefix ++y: " << (++y) << std::endl; // y is 6, prints 6
    int z = 5;
    std::cout << "Postfix z++: " << (z++) << std::endl; // prints 5, z becomes 6
    std::cout << "z after postfix increment: " << z << std::endl; // prints 6

    // Ternary Operator
    int max = (a > b) ? a : b;
    std::cout << "Max of a and b is: " << max << std::endl; // 10

    return 0;
}
