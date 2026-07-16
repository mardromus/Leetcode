class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long mx = 0;
        vector<int> prefixgcd(nums.size());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>mx) mx = nums[i];
            prefixgcd[i] = gcd(nums[i],mx);
        }
        sort(prefixgcd.begin(),prefixgcd.end());

        long long ans = 0;

        while(prefixgcd.size()>1){
            ans+= gcd(prefixgcd.front(),prefixgcd.back());
            prefixgcd.pop_back();
            prefixgcd.erase(prefixgcd.begin());
        }
        return ans;

        
        
    }
};