class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m) return false;
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        for(int i =0;i<n;i++){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }

        return mpp1==mpp2;

    }
};
