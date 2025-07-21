#include <iostream>

int main() {
    // One-dimensional array
    int numbers[5] = {10, 20, 30, 40, 50}; // Array of 5 integers
    std::cout << "First element: " << numbers[0] << std::endl; // Accessing elements using index (starts at 0)
    std::cout << "Third element: " << numbers[2] << std::endl;

    // Multi-dimensional array (2x3)
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    std::cout << "Matrix element [1][2]: " << matrix[1][2] << std::endl; // Output: 6

    // Looping through an array
    std::cout << "All elements of numbers array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}