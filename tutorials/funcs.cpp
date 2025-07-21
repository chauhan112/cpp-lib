#include <iostream>

// Function declaration (prototype)
int add(int a, int b);
void greet(std::string name); // Function with no return value (void)

int main() {
    int sum = add(5, 7); // Calling the function
    std::cout << "The sum is: " << sum << std::endl;

    greet("Alice"); // Calling the void function

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b; // Returns the result
}

void greet(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}