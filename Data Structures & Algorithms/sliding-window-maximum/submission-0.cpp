class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<int> q;
        unordered_map<int,int> m;
        for(int i=0;i<k;i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            q.push(x.first);
        }
        int n=nums.size();
        vector<int> ans={q.top()};
        for(int i=k;i<n;i++){
            m[nums[i-k]]--;
            m[nums[i]]++;
            if(m[nums[i]]==1)q.push(nums[i]);
            while(m[q.top()]==0)q.pop();    
            ans.push_back(q.top());
        }
        return ans;
    }
};
