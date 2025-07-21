// This is a single-line comment.
/* This is a
   multi-line comment. */

#include <iostream> // Necessary for input/output

int main() { // Entry point of the program
    // Statements are commands that perform actions
    std::cout << "This is a statement." << std::endl;

    { // This is a code block, often used with control flow
        int x = 10; // Variable declaration and initialization
        std::cout << "Inside a block, x = " << x << std::endl;
    } // Block ends, 'x' goes out of scope

    return 0; // Indicates successful execution
} 