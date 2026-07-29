class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int> charIndex(128,-1);
        int maxlength = 0;
        int left = 0;

        for(int right=0;right<n;right++)
        {
            if(charIndex[s[right]] >= left)
            left = charIndex[s[right]] + 1;

            charIndex[s[right]] = right;

            maxlength = max(maxlength, right-left+1);
        }
        return maxlength;
    }
};