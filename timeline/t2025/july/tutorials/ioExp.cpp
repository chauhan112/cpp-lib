#include <iostream>
#include <string> // Needed for std::string

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name; // Reads input into the 'name' variable

    std::cout << "Enter your age: ";
    std::cin >> age; // Reads input into the 'age' variable

    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}