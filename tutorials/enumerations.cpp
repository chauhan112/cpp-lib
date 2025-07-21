#include <iostream>

// Unscoped enumeration
enum Color { RED, GREEN, BLUE }; // RED is 0, GREEN is 1, BLUE is 2 by default

// Scoped enumeration (preferred in modern C++)
enum class TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    Color myColor = GREEN;
    std::cout << "My favorite color (enum): " << myColor << std::endl; // Outputs 1

    TrafficLight light = TrafficLight::YELLOW;
    // std::cout << "Traffic light (enum class): " << light << std::endl; // This won't compile directly!

    // To print enum class values, you need to cast them
    std::cout << "Traffic light (enum class) as int: " << static_cast<int>(light) << std::endl; // Outputs 1

    // Using enum class with switch
    switch (light) {
        case TrafficLight::RED:
            std::cout << "Stop!" << std::endl;
            break;
        case TrafficLight::YELLOW:
            std::cout << "Caution!" << std::endl;
            break;
        case TrafficLight::GREEN:
            std::cout << "Go!" << std::endl;
            break;
    }

    return 0;
}