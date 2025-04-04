class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0;
        for (int num : nums) {
            if (numSet.find(num - 1) == numSet.end()) { 
                int currentNum = num;
                int streak = 1;
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    streak++;
                }
                maxLength = max(maxLength, streak);
            }
        }
        return maxLength;
    }  
    
};