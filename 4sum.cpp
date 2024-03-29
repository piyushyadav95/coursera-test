#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    int n = nums.size();
    if (n < 4) return result;
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
        
        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates
            
            int left = j + 1, right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) ++left; // Skip duplicates
                    while (left < right && nums[right] == nums[right - 1]) --right; // Skip duplicates
                    ++left;
                    --right;
                } else if (sum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
    }
    
    return result;
}

// Example usage:
int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);
    for (const auto& vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
