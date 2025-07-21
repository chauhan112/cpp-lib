#include <iostream>

int main() {
    // Primitive Data Types
    int anInteger = 100;
    float aFloat = 3.14f; // 'f' suffix indicates float
    double aDouble = 2.71828;
    char aCharacter = 'A';
    bool aBoolean = true; // or false

    // Type Qualifiers
    const double PI = 3.14159;
    // PI = 3.0; // This would cause a compile-time error because PI is const

    // Type Casting
    int decimalInt = static_cast<int>(aDouble); // Explicit cast

    std::cout << "Integer: " << anInteger << std::endl;
    std::cout << "Float: " << aFloat << std::endl;
    std::cout << "Double: " << aDouble << std::endl;
    std::cout << "Character: " << aCharacter << std::endl;
    std::cout << "Boolean: " << aBoolean << std::endl;
    std::cout << "PI (const): " << PI << std::endl;
    std::cout << "Double cast to int: " << decimalInt << std::endl; // Output will be 2

    return 0;
}