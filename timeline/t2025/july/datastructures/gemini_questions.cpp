#include <vector>
#include "../tools/tools.hpp"

using namespace std;

int findTheMissingValue(vector<int> &v) {
    set<int> sv = pythonOps::pSet(v);
    size_t t = sv.size();
    for (int i = 0; i < t; i++) {
        if (sv.find(i) == sv.end()) {
            return i;
        }
    }
    return -1;
}
string reverseString(string s) {
    string newString{s};
    reverse(newString.begin(), newString.end());
    return newString;
}
bool isPalindrome(string s){
    return reverseString(s) == s;
}
int countVowels(string s){
    int t = 0;
    for (char c: s){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            t += 1;
        }
    }
    return t;
}
int binSearch(vector<int> v, int target){
    size_t t = v.size();
    size_t i;
    int a = 0, b = t;
    
    while (true){
        i = a + (b-a)/2;
        int k = v[i];
        if (k == target){
            return i;
        }
        if (k < target){
            a = i + 1;
        } else {
            b = i;
        }
        if (a >= b){
            return -1;
        }
    }
}