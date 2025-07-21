#include <iostream>
#include <string>

// Define a structure
struct Person {
    std::string name;
    int age;
};

int main() {
    // Create an instance (object) of the structure
    Person person1;

    // Assign values to members using the dot operator
    person1.name = "Bob";
    person1.age = 30;

    // Access members
    std::cout << "Person Name: " << person1.name << std::endl;
    std::cout << "Person Age: " << person1.age << std::endl;

    // Another way to initialize
    Person person2 = {"Alice", 25};
    std::cout << "Person 2 Name: " << person2.name << ", Age: " << person2.age << std::endl;

    return 0;
}