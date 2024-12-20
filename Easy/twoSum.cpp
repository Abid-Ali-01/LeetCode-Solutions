#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // Map to store numbers and their indices

        // Iterate through the vector
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // Calculate the complement of the current element

            // Check if the complement exists in the map
            if (seen.find(complement) != seen.end()) {
                // Return the indices of the pair as a vector
                return {seen[complement], i};
            }

            // If complement is not found, store the current number and its index
            seen[nums[i]] = i;
        }

        // Return an empty vector if no pair is found
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);

    // Display the result
    cout << "Output: [";
    if (!result.empty()) {
        cout << result[0] << "," << result[1];
    }
    cout << "]" << endl;

    return 0;
}