class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        
        string s2 = "";
        for(int i =0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            { s2 += tolower(s[i]);}
        }
        cout<<s2<<endl;

        int l =0;int r = s2.size()-1;
        while(l<=r){
            if(s2[l]!=s2[r]) return false;
            l++;
            r--;
        }
        return true;
        
    }
};
