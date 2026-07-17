class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        vector<int> got(n+1);
        got[0] = 0;
        got[1] = nums[0];
        for (int i = 2; i <= n; i++) {
            got[i] = max(got[i-1], got[i-2] + nums[i-1]);
        }
        return got[n];
    }
};
