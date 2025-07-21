#include <iostream>

int main() {
    int num = 10;

    // if-else if-else
    if (num > 20) {
        std::cout << "Number is greater than 20." << std::endl;
    } else if (num > 5) {
        std::cout << "Number is greater than 5 but not greater than 20." << std::endl;
    } else {
        std::cout << "Number is 5 or less." << std::endl;
    }

    // switch statement
    char grade = 'B';
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break; // Exits the switch statement
        case 'B':
            std::cout << "Good job!" << std::endl;
            break;
        case 'C':
            std::cout << "Satisfactory." << std::endl;
            break;
        default: // If no case matches
            std::cout << "Needs improvement." << std::endl;
    }

    // for loop
    std::cout << "For loop:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "Iteration " << i << std::endl;
    }

    // while loop
    std::cout << "While loop:" << std::endl;
    int counter = 0;
    while (counter < 3) {
        std::cout << "Count: " << counter << std::endl;
        counter++; // Increment counter
    }

    // do-while loop
    std::cout << "Do-while loop:" << std::endl;
    int doCounter = 0;
    do {
        std::cout << "Do-while count: " << doCounter << std::endl;
        doCounter++;
    } while (doCounter < 3); // Condition checked after execution

    // break and continue
    std::cout << "Break and Continue example:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        if (i == 2) {
            continue; // Skips the rest of the loop body for i=2
        }
        if (i == 4) {
            break; // Exits the loop entirely when i=4
        }
        std::cout << "Processing " << i << std::endl;
    }

    return 0;
}