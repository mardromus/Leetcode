class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int count = 0; 
        for(auto [key,value]:mp){
            if (value>1) count++;
        }
        return count;
        
    }
};