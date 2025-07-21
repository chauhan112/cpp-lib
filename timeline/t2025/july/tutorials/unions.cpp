#include <iostream>

// Define a union
union Data {
    int i;
    float f;
    char str[20]; // A C-style string
};

int main() {
    Data data;

    // Union members share the same memory location.
    // You can only use one member at a time meaningfully.

    data.i = 10;
    std::cout << "Data as integer: " << data.i << std::endl;

    data.f = 22.5f;
    std::cout << "Data as float: " << data.f << std::endl;

    // Be careful: accessing data.i after setting data.f might yield garbage
    // std::cout << "Data as integer after float: " << data.i << std::endl; // Likely not 10

    // Using strcpy for string assignment in unions
    strcpy(data.str, "C++"); // Note: requires #include <cstring>
    std::cout << "Data as string: " << data.str << std::endl;

    return 0;
}