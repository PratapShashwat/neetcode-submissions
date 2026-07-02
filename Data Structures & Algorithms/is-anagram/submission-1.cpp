class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26,0);
        for(auto x:s)count[x-'a']++;
        for(auto x:t)count[x-'a']--;
        for(auto &x:count)x=abs(x);
        return (accumulate(count.begin(),count.end(),0)==0?true:false);
    }
};
