class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=2;i<n;i++){
            if(i<n-1 && nums[i]==nums[i+1])continue;
            // 0 to i-1
            //i is target
            int l=0,r=i-1;
            while(l<r){
                if(nums[l]+nums[r]+nums[i]==0){
                    
                    ans.push_back({nums[l],nums[r],nums[i]});
                    l++;
                    while(l<r && l>0 && nums[l]==nums[l-1])l++;
                    //while(l<r && nums[r]==nums[r-1])r--;
                }
                else if(nums[l]+nums[r]+nums[i]<0)l++;
                else r--;
            }
        }
        return ans;
    }
};
