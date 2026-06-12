class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int preans = 0;
        int prefix = 1;
        while (prefix == 1){
        for(int i = 0; i<strs[0].size(); i++){
            for(int j = 1;j<strs.size(); j++){
                if(i >= strs[j].size() || strs[0][i] != strs[j][i]){
                    
                    prefix = 0;
                    break;
                }
                
                }
                if(prefix==0) break;
                preans++;
                
            }
            break;
        
        }
        return strs[0].substr(0,preans);
    }
};