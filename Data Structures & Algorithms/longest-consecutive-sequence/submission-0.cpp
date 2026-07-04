class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int longest=0;
        for(auto x:s){
            if(s.find(x-1)==s.end()){
                int l=1;
                while(s.find(x+l)!=s.end()){
                    l++;
                }
                longest=max(longest,l);
            }
        }
        return longest;
    }
};
