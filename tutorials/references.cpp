#include <iostream>

void incrementByValue(int val) {
    val++; // Changes a copy of the original variable
}

void incrementByReference(int& ref) {
    ref++; // Changes the original variable directly
}

int main() {
    int originalValue = 5;

    // Pass by value
    incrementByValue(originalValue);
    std::cout << "After incrementByValue: " << originalValue << std::endl; // Output: 5

    // Pass by reference
    incrementByReference(originalValue);
    std::cout << "After incrementByReference: " << originalValue << std::endl; // Output: 6

    // References must be initialized
    int otherValue = 10;
    int& refToOther = otherValue; // 'refToOther' is an alias for 'otherValue'
    refToOther = 15;
    std::cout << "originalValue: " << otherValue << std::endl; // Output: 15

    return 0;
}