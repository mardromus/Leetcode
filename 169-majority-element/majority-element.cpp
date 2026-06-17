class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int mostf = 0;
        int freq = -1;

        for(auto x : nums){
            map[x]++;
            if(map[x]>mostf){
                mostf = map[x];
                freq = x;
            }
        }
        
        return freq;
        
    }
};