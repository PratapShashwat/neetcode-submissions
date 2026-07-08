class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int n=s.size();
        int ans=0;
        unordered_set<char> c;
        while(r<n){
                if(c.find(s[r])!=c.end()){
                    c.erase(s[l]);
                    l++;
                }
                else{
                    c.insert(s[r]);
                    r++;
                    ans=max(r-l,ans);
                }
            }
        
        return ans;
    }
};
