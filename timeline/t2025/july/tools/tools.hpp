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
    
};