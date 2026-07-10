class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
        vector<int> pre(n),suf(n);
        for(int i=0;i<n;i++){
            if(i%k==0)pre[i]=nums[i];
            else pre[i]=max(nums[i],pre[i-1]);
        }
        for(int i=n-1;i>=0;i--){
            if(i%k==k-1 || i%n==n-1)suf[i]=nums[i];
            else suf[i]=max(nums[i],suf[i+1]);
        }
        for(int i=k-1;i<n;i++){
            int l=i-k+1,r=i;
            ans.push_back(max(suf[l],pre[r]));
        }
        return ans;
    }
};
