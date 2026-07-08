class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int n=s.size();
        int ans=0;
        unordered_map<char,int> c;
        while(r<n){
                if(c[s[r]]){
                    c[s[l]]=false;
                    l++;
                }
                else{
                    c[s[r]]=true;
                    r++;
                    ans=max(r-l,ans);
                }
            }
        
        return ans;
    }
};
