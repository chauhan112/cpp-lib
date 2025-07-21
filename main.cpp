#include <vector>
#include <iostream>
#include "datastructures/twoSum.hpp"

int main() {
    std::vector<int> nums {2, 5, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);
    
    // if (!result.empty()) {
    //     std::cout << "Indices of the two numbers that add up to " << target << " are: "
    //               << result[0] << " and " << result[1] << std::endl;
    // } else {
    //     std::cout << "No two numbers add up to " << target << std::endl;
    // }

    return 0;
}