class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int n=nums.size();
        int r=n-1;
        int m;
        while(l<=r){
            m=(r-l)/2+l;
            if(m==0 && nums[m]<nums.back())break;
            if(m!=0 && nums[m]<nums[m-1])break;
            if(nums[m]>nums.back())l=m+1;
            else r=m-1;
        }
        int k=m;
        cout<<k<<endl;
        int L=0;int R=n-1;
        while(L<=R){
            int M=(R-L)/2+L;
            int temp=M;
            M+=k;
            M%=n;
            if(nums[M]==target)return M;
            else if(nums[M]<target)L=temp+1;
            else R=temp-1;
        }
        return -1;
    }
};
