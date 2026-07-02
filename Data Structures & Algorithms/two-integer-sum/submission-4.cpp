class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]!=0 && 2*nums[i]==target)return {m[nums[i]]-1,i};
            m[nums[i]]=(i+1);
        }
        for(auto x:m){
            int i=x.first;
            if(m.find(target-i)==m.end())continue;
            int n=x.second-1;
            int l=m[target-i]-1;
            if(n!=l){
                if(n>l)swap(n,l);
                return {n,l};
            }
        }
        return {};
    }
};
