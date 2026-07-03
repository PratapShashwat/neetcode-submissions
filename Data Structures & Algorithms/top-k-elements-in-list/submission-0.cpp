class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<pair<int,int>> v;
        v.push_back({nums[0],1}); 
        int j=0;
        int kk=0;
        for(int i=1;i<n;i++){
            if(nums[j]==nums[i]){
                v[kk].second++;
            }
            else{
                kk++;
                v.push_back({nums[i],1});
                j=i;
            }
        }
        sort(v.begin(),v.end(),[](pair<int,int> &a, pair<int,int> &b){
            if(a.second==b.second)return a.first>b.first;
            return a.second>b.second;
        });
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
