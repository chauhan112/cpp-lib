#include <iostream>
#include <string> // Include the string library

int main() {
    // C-style string (null-terminated character array)
    char cString[] = "Hello";
    std::cout << "C-style string: " << cString << std::endl;

    // std::string (more flexible and safer)
    std::string cppString = "World";
    std::cout << "C++ string: " << cppString << std::endl;

    // Concatenation
    std::string greeting = std::string(cString) + ", " + cppString + "!";
    std::cout << "Concatenated: " << greeting << std::endl;

    // String length
    std::cout << "Length of greeting: " << greeting.length() << std::endl;

    // Accessing characters
    std::cout << "First character of greeting: " << greeting[0] << std::endl;

    return 0;
}