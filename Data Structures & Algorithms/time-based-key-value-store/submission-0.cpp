class TimeMap {
public:
    map<string,vector<pair<int,string>>> st;
    // key to value,time
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        st[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto it=st.find(key);
        if(st.end()==it)return "";
        vector<pair<int,string>> temp=st[key];
        int l=0,r=temp.size()-1;
        while(l<=r){
            int m=(r-l)/2+l;
            if(temp[m].first==timestamp)return temp[m].second;
            else if(temp[m].first>timestamp)r=m-1;
            else l=m+1;
        }
        if(r==-1)
        return "";
        return temp[r].second;
    }
};
