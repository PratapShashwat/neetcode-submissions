class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char,int> ma,mb;
        int ans=INT_MAX;
        string res="";
        int valid=-1*m;
        for(auto x:t){
            mb[x]++;
        }
        int i=0;int j=0;
        while(j<n){
            ma[s[j]]++;
            if(ma[s[j]]<=mb[s[j]])valid++;
            //else if(ma[s[j]]-mb[s[j]]==1)valid--;
            while(i<j && ma[s[i]]>mb[s[i]]){
                ma[s[i]]--;
                //if(ma[s[i]]==0)valid++;
                //else if (ma[s[i]]==-1)valid--;
                i++;
            }
            if(valid>=0 and ans>j-i+1){
                ans=j-i+1;
                res=string(s.begin()+i,s.begin()+j+1);
            }
            j++;
        }
        return res;
    }
};
