class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans ;
        unordered_map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        for(auto y :t){
            mp[y]--;
            if(mp[y]<0){
                ans =  y;
                
            }
        }
        return ans;
        
    }
};