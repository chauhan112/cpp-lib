#include <vector>
#include <iostream>
#include "timeline/t2025/july/tools/tools.hpp"
using namespace std;

int main() {
    vector<string> vals = StringOps::split("1 2 3 4 5 6");
    for (string k: vals){
        cout << k << endl;
    }
    cout << StringOps::trim("\n 1sawd1 \n") << "test";
    return 0;
}