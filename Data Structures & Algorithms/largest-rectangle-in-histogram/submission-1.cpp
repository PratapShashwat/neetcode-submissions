class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        vector<int> pre(n,-1),suf(n,n);
        for(int i=1;i<n;i++){
            int h=i-1;
            while(h!=-1 && heights[i]<=heights[h])h=pre[h];
            pre[i]=h;
        }
        for(int i=n-2;i>=0;i--){
            int h=i+1;
            while(h!=n && heights[i]<=heights[h])h=suf[h];
            suf[i]=h;
        }
        for(int i=0;i<n;i++){
            //pre[i],suf[i]
            ans=max(ans,(suf[i]-pre[i]-1)*heights[i]);
        }
        return ans;
    }
};
