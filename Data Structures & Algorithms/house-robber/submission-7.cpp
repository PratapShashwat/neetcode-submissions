class Solution {
public:
    int rob(vector<int>& nums) {
        //rob(n)=max(rob(n-1),rob(n-2)+nums[i-2]);
        //vector<int> got(nums.size());
        if(nums.size()==1)return nums[0];
        //got[0]=nums[0];
        //got[1]=max(nums[1],nums[0]);
        int prev=nums[0];
        int curr=max(nums[1],prev);
        for(int i=2;i<nums.size();i++){
            //got[i]=max(got[i-1],got[i-2]+nums[i]);
            tie(prev,curr)=make_pair(curr,max(curr,prev+nums[i]));
        }
        return curr;
    }
};
