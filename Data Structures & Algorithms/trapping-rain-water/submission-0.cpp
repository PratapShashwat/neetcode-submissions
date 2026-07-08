class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0,rightmax=0,l=0,r=height.size()-1;
        int ans=0;
        while(l<=r){
            if(leftmax<rightmax){
                leftmax=max(leftmax,height[l]);
                ans+=leftmax-height[l];
                l++;
            }
            else{
                rightmax=max(height[r],rightmax);
                ans+=rightmax-height[r];
                r--;
            }
        }
            return ans;
    
    }
};
