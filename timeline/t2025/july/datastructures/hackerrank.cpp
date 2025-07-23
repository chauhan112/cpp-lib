#include <vector>
#include <iostream>

using namespace std;
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int appleCount = 0;
    int orangeCount = 0;
    for (int apple: apples) {
        int loc = a + apple;
        if (loc >= s && loc <= t) {
            appleCount += 1;
        }
    }
    for (int orange: oranges) {
        int loc = a + orange;
        if (loc >= s && loc <= t) {
            orangeCount += 1;
        }
    }
    cout << appleCount << endl;
    cout << orangeCount << endl;
}