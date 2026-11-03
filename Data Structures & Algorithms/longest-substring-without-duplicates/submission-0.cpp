class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int left = 0;
        int maxLength = 0;
        for(int r=0;r<s.size();r++)
        {
            while(seen.find(s[r])!=seen.end()){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[r]);
            maxLength = max(maxLength,r-left+1);
        }
        return maxLength;
    }
};
