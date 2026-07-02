class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>> str;
        for(auto x:strs){
            string y="00000000000000000000000000";
            for(auto i:x){
                y[i-'a']++;
            }
            str.push_back({y,x});
        }
        sort(str.begin(),str.end());
        vector<vector<string>> ans;
        int n=str.size();
        int j=0;
        ans.push_back({str[j].second});
        for(int i=1;i<n;i++){
            if(str[i].first==str[j].first){
                ans[ans.size()-1].push_back(str[i].second);
            }
            else{
                j=i;
                ans.push_back({str[i].second});
            }
        }
        return ans;
    }
};
