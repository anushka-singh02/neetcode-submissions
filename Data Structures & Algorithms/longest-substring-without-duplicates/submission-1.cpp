class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            // If character was seen and is inside the current window
            if (mpp.find(s[right]) != mpp.end()) {
                left = max(left, mpp[s[right]] + 1);
            }

            // Update latest index of current character
            mpp[s[right]] = right;

            // Update answer
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};