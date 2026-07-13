class Solution {
public:
    int findMin(vector<int> &nums) {
        int ans=INT_MAX;
        int l=0;int n=nums.size();
        int r=n-1;
        
        while(l<=r){
            int m=(r-l)/2+l;
            if(m!=0 &&nums[m]<nums[m-1])return nums[m];
            else if(m==0 &&nums[m]<nums.back())return nums[0];
            if(nums[m]>nums.back())l=m+1;
            else r=m-1;
        }
        return nums[l];
    }
};

