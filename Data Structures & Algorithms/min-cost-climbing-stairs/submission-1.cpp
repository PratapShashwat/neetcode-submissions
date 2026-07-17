class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        //mincost(n)=max(mincost(n-1)+cost[n-1],mincost(n-2)+cost[n-2]);
        int prev=0,curr=0;
        for(int i=2;i<=n;i++){
            tie(prev,curr)=make_tuple(curr,min(curr+cost[i-1],prev+cost[i-2]));

        }
        return curr;
    }
};
