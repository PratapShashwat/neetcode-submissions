class Solution {
public:
int call(int l, int r, vector<int> &seg){
    int ans=INT_MIN;
    while(l<=r){
    if(l%2==1)ans=max(ans,seg[l++]);
    if(r%2==0)ans=max(ans,seg[r--]);
    l/=2,r/=2;
    }
    return ans;
}
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> seg(2*n);
        for(int i=0;i<n;i++){
            seg[n+i]=nums[i];
        }
        for(int i=n-1;i>0;i--){
            seg[i]=max(seg[2*i],seg[2*i+1]);
        }
        vector<int> ans;
        for(int i=k-1;i<n;i++){
            int l=i-k+1,r=i;
            ans.push_back(call(l+n,r+n,seg));
        }
        return ans;
    }
};
