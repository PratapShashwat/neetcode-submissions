class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();string h;
        for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9')h.push_back(s[i]);
        else if(s[i]>='A' && s[i]<='Z')h.push_back(s[i]);
        else if(s[i]>='a' && s[i]<='z')h.push_back(s[i]-('a'-'A'));}
        int m=h.size();
        for(int i=0;i<m/2;i++){
            if(h[i]!=h[m-i-1])return false;
        }
        return true;
    }
};
