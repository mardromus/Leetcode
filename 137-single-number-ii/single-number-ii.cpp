class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i<nums.size();i++){
            if(nums.size()==1) return nums[i];
            if(i+3>nums.size()) return nums[nums.size()-1];
            if(nums[i]==nums[i+1] && nums[i]==nums[i+2]){
                i = i+2;
                continue;
                
            }
            else{
                return nums[i];
                i=i+2;
            }
        }
        return -1;
        
    }
};