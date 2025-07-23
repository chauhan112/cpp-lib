#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;


class StringOps{
public:
    static string ltrim(const string &str) {
        string s(str);
        s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), [](unsigned char c) {return !isspace(c);})
        ); 
        return s;
    }
    static string rtrim(const string &str) {
        string s(str);
        s.erase(
            find_if(s.rbegin(), s.rend(), [](unsigned char c){return !isspace(c);}).base(),
            s.end()
        );

        return s;
    }
    static string trim(const string &str){
        return StringOps::rtrim(StringOps::ltrim(str));
    }
    static string uppercase(const string &str){
        string s(str);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        return s;
    }
    static string lowercase(const string &str){
        string s(str);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
    static vector<string> split (const string &inpString, const string splitter = " "){
        string inpCopy{inpString};
        vector<string> res;
        size_t pos = 0;
        string token;
        while ((pos = inpCopy.find(splitter)) != string::npos) {
            token = inpCopy.substr(0, pos);
            res.push_back(token);
            inpCopy.erase(0, pos + splitter.length());
        }
        res.push_back(inpCopy);
        return res;
    }
    static string join(string delim, vector<string> v){
        string res = v[0];
        for (int i = 1; i < v.size(); i++){
            res += delim + v[i];
        }
        return res;
    }
    static string slice(string s, int start, int end){
        return s.substr(start, end - start);
    }
    static string rjust(string s, int width, char c = ' '){
        return string(width - s.length(), c) + s;
    }
    static string ljust(string s, int width, char c = ' '){
        return s + string(width - s.length(), c);
    }
};

// namespace PathOps {
//     string basepath(const string &path){
//         return "";
//     }
// }

namespace pythonOps{
    int pInt(string s){
        return stoi(s);
    }
    string pStr(int i){
        return to_string(i);
    }
    template <class T>
    set<T> pSet(vector<T> v){
        return set<T>(v.begin(), v.end());
    }
    long pSum(vector<int> v){
        long s = 0;
        for (int i: v){
            s += i;
        }
        return s;
    }
    template <class T>
    T pMax(vector<T> v){
        return *max_element(v.begin(), v.end());
    }
    template <typename Container, typename UnaryOperation>
    auto pMap(const Container& input_container, UnaryOperation op)
        -> std::vector<decltype(op(*input_container.begin()))> 
    {
        using ValueType = typename Container::value_type;
        using ResultType = decltype(op(std::declval<ValueType>())); 

        std::vector<ResultType> result_vector;
        result_vector.reserve(input_container.size());

        std::transform(input_container.begin(), input_container.end(),
                    std::back_inserter(result_vector),
                    op);
        return result_vector;
    }

    // template <typename Container, typename UnaryOperation>
    // auto pFilter(const Container& input_container, UnaryOperation op)
    //     -> std::vector<decltype(op(*input_container.begin()))> 
    // {
    //     using ValueType = typename Container::value_type;
        

    //     std::vector<ResultType> result_vector;
    //     result_vector.reserve(input_container.size());

    //     std::transform(input_container.begin(), input_container.end(),
    //                 std::back_inserter(result_vector),
    //                 op);
    //     return result_vector;
    // }

    // template <class T>
    // pSorted(vector<T> v, bool reverse = false, keyFunc key = [](T t){return t;} ){
    //     sort(v.begin(), v.end());
    // }




}
namespace ioUtils{
    template <class printType>
    void print(printType p){
        cout << p;
    }
    template <class printType>
    void printLine(vector<printType> p, string delim = " "){
        for (printType k: p){
            cout << k << delim;
        }
        cout << endl;
    }
}