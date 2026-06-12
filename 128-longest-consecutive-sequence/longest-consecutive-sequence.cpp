class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());

        int longest = 0;

        for (int num : numset) {
            if (numset.find(num - 1) == numset.end()) {

                int currentnum = num;
                int streak = 1;

                while (currentnum != INT_MAX &&
                       numset.find(currentnum + 1) != numset.end()) {
                    currentnum++;
                    streak++;
                }

                longest = max(longest, streak);
            }
        }

        return longest;
    }
};