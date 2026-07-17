class Solution {
public:
    int rob(vector<int>& nums) {
        //rob(n)=max(rob(n-1),rob(n-2)+nums[i-2]);
        vector<int> got(nums.size()+1);
        got[0]=0;
        got[1]=nums[0];
        for(int i=2;i<=nums.size();i++){
            got[i]=max(got[i-1],got[i-2]+nums[i-1]);
        }
        return got[nums.size()];
    }
};
