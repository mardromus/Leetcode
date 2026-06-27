class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int x = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto x:nums) mp[x]++;
        for(const auto& [key,value]:mp){
            if(value>x/3){
                ans.push_back(key);
            }
        }
        return ans;
        
    }
};