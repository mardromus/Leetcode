class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int csum = nums[0];
        
        for(int i =1;i<nums.size();i++){
            csum = max(nums[i],csum + nums[i]);
            maxsum = max(csum,maxsum);
        }
        return maxsum;
    }
};