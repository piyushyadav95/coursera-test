#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;
        std::vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                // If complement is found in the map, return indices
                result.push_back(numMap[complement]);
                result.push_back(i);
                return result;
            }
            // Store the current number and its index in the map
            numMap[nums[i]] = i;
        }

        // If no solution is found, return an empty vector
        return result;
    }
};
