#include <iostream> 
#include "py_builtins.hpp"

// first of all compile each file into object files
// g++ -c helloWorld/hello.cpp
// g++ -c helloWorld/py_builtins.hpp
// then link the object files together
// g++ helloWorld/hello.o helloWorld/py_builtins.o -o helloWorld/hello
int main() {
    print();
    return 0;
}
