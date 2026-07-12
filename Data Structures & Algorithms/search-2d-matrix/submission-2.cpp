class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n=matrix.size();
       int l=0,r=n-1;
       while(l<=r){
        int m=(r-l)/2+l;
        if(matrix[m][0]>target)r=m-1;
        else l=m+1;
       } 
       l--;
       if(l<0)return false;
       int m=matrix[l].size();
       int L=0,R=m-1;
       while(L<=R){
        int M=(R-L)/2+L;
        if(matrix[l][M]==target)return true;
        else if(matrix[l][M]>target)R=M-1;
        else L=M+1;
       }
       return false;
    }
};
