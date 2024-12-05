#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse the vector from the last digit backward
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If the current digit is 9, set it to 0 and continue to propagate the carry
            digits[i] = 0;
        }

        // If all digits were 9, we need to add a new leading 1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    vector<int> nums = {9}; // Example input
    Solution s;
    vector<int> result = s.plusOne(nums);

    // Print the updated vector
    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}
