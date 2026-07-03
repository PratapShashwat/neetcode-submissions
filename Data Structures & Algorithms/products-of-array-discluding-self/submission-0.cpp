class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<  int> prefix(nums.size(),nums[0]);
        vector<  int> suffix(nums.size(),nums.back());
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]*nums[i];
        }
        for(int i=nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i];
        }
        vector<int> ans={suffix[1]};
        for(int i=1;i<nums.size()-1;i++){
            ans.push_back(prefix[i-1]*suffix[i+1]);
        }
        ans.push_back(prefix[nums.size()-2]);
        return ans;
    }
};
