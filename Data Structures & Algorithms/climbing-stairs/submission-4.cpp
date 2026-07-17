class Solution {
public:
    int climbStairs(int n) {
        //climbStairs(n)=climbStairs(n-1)+climbStairs(n-2);
        //vector<int> dp(n+1,1);
        int prev=1,curr=1;
        for(int i=2;i<=n;i++){
            curr=prev+curr;
            prev=(curr-prev);
        }
        return curr;
    }
};
