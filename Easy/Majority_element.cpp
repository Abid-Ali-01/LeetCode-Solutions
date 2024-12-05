#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int majority = nums.size()/2;
      for(int i = 0; i<= nums.size(); i++){
       int c = count(nums.begin(), nums.end(), nums[i]);
  
         if(c > majority){
         return nums[i];
         }
      }
      return 0;
  
    }
};


int main() {
    Solution s;
    vector<int> nums = {2,2,1,1,1,2,2};
  int count = s.majorityElement(nums);
  cout<<count;
    return 0;
}
