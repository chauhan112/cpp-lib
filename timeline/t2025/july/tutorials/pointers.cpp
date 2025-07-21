#include <iostream>

int main() {
    int var = 10;
    int* ptr = &var; // 'ptr' is a pointer to an integer, '&var' gets the memory address of 'var'

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Value of ptr (address it holds): " << ptr << std::endl;
    std::cout << "Value pointed to by ptr (*ptr): " << *ptr << std::endl; // Dereferencing the pointer to get the value

    // Modifying through pointer
    *ptr = 20; // Changes the value of 'var' to 20
    std::cout << "Value of var after changing through pointer: " << var << std::endl;

    int* nullPtr = nullptr; // A pointer that points to nothing
    if (nullPtr == nullptr) {
        std::cout << "nullPtr is indeed a null pointer." << std::endl;
    }

    return 0;
}