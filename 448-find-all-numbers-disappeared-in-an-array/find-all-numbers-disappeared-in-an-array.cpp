class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp ;
        for(auto x: nums){
            mp[x]++;
            }
        
        for (int i = 1 ; i<=nums.size();i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }

        }
        return ans;
    }
};