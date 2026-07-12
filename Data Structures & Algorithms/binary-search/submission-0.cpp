class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();int l=0,r=n-1;
        while(l<=r){
            int m=((r-l)>>1)+l;
            if(target==nums[m])return m;
            else if(target<nums[m])r=m-1;
            else l=m+1;
        }
        return -1;
    }
};
