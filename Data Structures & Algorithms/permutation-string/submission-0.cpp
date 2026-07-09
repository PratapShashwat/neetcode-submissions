class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> ma;
        int n=s2.size();
        int m=s1.size();
        for(int i=0;i<m;i++){
            ma[s2[i]]++;
            ma[s1[i]]--;
        }
        int val=0;
        for(auto x:ma){
            val+=abs(x.second);
        }
        if(val==0)return true;
        for(int i=m;i<n;i++){
            val-=abs(ma[s2[i]])+abs(ma[s2[i-m]]);
            ma[s2[i]]++;
            ma[s2[i-m]]--;
            val+=abs(ma[s2[i]])+abs(ma[s2[i-m]]);
            if(val==0)return true;
        }
        return false;
    }
};
