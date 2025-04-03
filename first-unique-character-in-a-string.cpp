class Solution {
public:
    int firstUniqChar(string str) {
          unordered_map<char, int> charCount;
        for (char c : str) {
            charCount[c]++;
        }

        for (int i = 0; i < str.size(); ++i) {
            if (charCount[str[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};