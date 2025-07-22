#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <numeric>

using namespace std;

namespace Array{
    int sum(vector<int> &v) {
        return accumulate(v.begin(), v.end(), 0);
    }

    template <typename Container, typename UnaryOperation>
    auto map(const Container& input_container, UnaryOperation op)
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
}

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
    static vector<string> split(const string &str) {
        vector<string> tokens;

        string::size_type start = 0;
        string::size_type end = 0;

        while ((end = str.find(" ", start)) != string::npos) {
            tokens.push_back(str.substr(start, end - start));

            start = end + 1;
        }

        tokens.push_back(str.substr(start));

        return tokens;
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
    static vector<string> split (const string &inpString, const string splitter){
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
};

// namespace PathOps {
//     string basepath(const string &path){
//         return "";
//     }
// }

namespace ioUtils{
    template <class printType>
    void print(printType p){
        cout << p;
    }
    template <class printType>
    void printLine(vector<printType> p, char delim = ' '){
        for (printType k: p){
            cout << k << delim;
        }
        cout << endl;
    }
}