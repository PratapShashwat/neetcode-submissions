class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int n=s.size();
        int ans=0;
        unordered_map<char,int> c;
        while(r<n){
                if(c.find(s[r])!=c.end()){
                    l=max(c[s[r]]+1,l);
                }
                    c[s[r]]=r;
                    r++;
                    ans=max(r-l,ans);
                }
            
        
        return ans;
    }
};
