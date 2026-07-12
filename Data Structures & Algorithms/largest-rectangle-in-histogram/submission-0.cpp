class Solution {
public:
    int f(vector<int> &st, int l, int r,vector<int> &heights){
        int n=heights.size();
        int ans=st[l];
        while(l<=r){
            if(l%2==1){
                if(heights[st[l]]<heights[ans])ans=st[l];
                l++;}
            if(r%2==0){
                if(heights[st[r]]<heights[ans])ans=st[r];
                r--;}
            l/=2,r/=2;
        }
        return ans;
        
    }
    int call(int l, int r, vector<int> &st, vector<int> &heights){
        int n=heights.size();
        if(l<0 || r>=n)return 0;
        if(l>r)return 0;
        if(l==r)return heights[l];
        int a1,a2,a3;
        int t=f(st,l+n,r+n,heights);
        a1=heights[t]*(r-l+1);
        a2=call(l,t-1,st,heights);
        a3=call(t+1,r,st,heights);
        return max({a1,a2,a3});
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> st(2*n);
        for(int i=0;i<n;i++){
            st[i+n]=i;
        }    
        for(int i=n-1;i>=1;i--){
            if(heights[st[i*2]]<heights[st[i*2+1]])st[i]=st[i*2];
            else st[i]=st[i*2+1];
        }
        int ans=call(0,n-1,st,heights);
        return ans;
    }
};
