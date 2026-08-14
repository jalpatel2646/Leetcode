class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ans =0 ;
        while(true)
        {
            bool sorted =true;
            for(int i = 0 ; i <nums. size()-1;i++){
                if(nums[i]>nums[i+1]){
                    sorted = false; break;
                }
            }
            if(sorted) return ans;
            int pos = 0;
            for(int i=1; i<nums.size()-1;i++){
                if(nums[i]+nums[i+1]< nums[pos]+nums[pos+1])
                {
                    pos=i;
                }
            }
            nums[pos]= nums[pos]+nums[pos+1];
            nums.erase(nums.begin() + pos+1);
            ans++;
        }
    }
};