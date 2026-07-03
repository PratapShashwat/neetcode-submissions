class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto x:strs){
            int s=x.size();
            ans+=(s/100)%10+'0';
            ans+=(s/10)%10+'0';
            ans+=(s/1)%10+'0';
            ans+=x;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> ans;
        while(i<s.size()){
            int n=(((s[i]-'0')*100)+(s[1+i]-'0')*10)+(s[2+i]-'0')*1;
            i+=3;
            ans.push_back(string(s.begin()+i,s.begin()+i+n));
            i+=n;
        }
        return ans;
    }
};
