#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // Use lower_bound to find the position of the target or where it should be inserted
        auto it = lower_bound(nums.begin(), nums.end(), target);

        // If target is found, return the index
        if (it != nums.end() && *it == target) {
            return it - nums.begin(); 
        }

        // If target is not found, return the insertion index
        return it - nums.begin();
    }
};


int main (){

    Solution s;
    vector<int> vec = {1,3,5,6};
    int target = 7;

   int display=  s.searchInsert(vec, target);
   cout<<display;

}