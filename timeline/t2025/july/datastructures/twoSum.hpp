#pragma once

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int t = nums.size();
    int i= 0;
    int j = t-1;
    std::sort(nums.begin(), nums.end(),[](int a, int b) {return a<b;} );
    for (int v: nums){
        std::cout << v << std::endl;
    }
    return {};
}