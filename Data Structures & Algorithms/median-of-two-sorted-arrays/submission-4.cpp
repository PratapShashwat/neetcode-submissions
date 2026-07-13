class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if(n>m)return findMedianSortedArrays(nums2, nums1);
        int l=0;
        int r=n;
        int t=(n+m+1)/2;
        while(l<=r){
            int i=(r-l)/2+l;
            int j=t-i;
            int aleft=(i-1>=0?nums1[i-1]:INT_MIN);
            int aright=(i-1<n-1?nums1[i]:INT_MAX);
            int bleft=(j-1>=0?nums2[j-1]:INT_MIN);
            int bright=(j-1<m-1?nums2[j]:INT_MAX);
            if(aleft<=bright && bleft<=aright){
                if((n+m)%2==1)return max(aleft, bleft);
                return 1.0*(max(aleft,bleft)+min(bright,aright))/2;
            }
            if(aleft>bright)r=i-1;
            else l=i+1;
        } 
        return 0;
    }
};
