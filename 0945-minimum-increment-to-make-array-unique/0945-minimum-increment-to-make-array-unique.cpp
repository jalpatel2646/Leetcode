class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
  int n = 0;
  for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                int newValue = nums[i - 1] + 1;
                n += newValue - nums[i];
                nums[i] = newValue;
            }
        }
   return n;
    }
};