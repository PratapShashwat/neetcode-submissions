class Solution {
public:
    int rob(vector<int>& nums) {
        //dont rob house 1;
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        if(nums.size()==3)return max({nums[0],nums[1],nums[2]});
        int prev=nums[0],curr=max(nums[0],nums[1]);
        for(int i=2;i<nums.size()-1;i++){
            tie(prev,curr)=make_tuple(curr,max(curr,prev+nums[i]));
        }
        int ans=curr;
        prev=nums[nums.size()-1];
        curr=max(prev,nums[nums.size()-2]);
        for(int i=nums.size()-3;i>0;i--){
            tie(prev,curr)=make_tuple(curr,max(curr,prev+nums[i]));
        }
        ans=max(ans,curr);
        return ans;
    }
};
