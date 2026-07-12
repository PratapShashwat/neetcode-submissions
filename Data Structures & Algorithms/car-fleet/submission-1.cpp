class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> p;
        int n=position.size();
        for(int i=0;i<n;i++){
            p.push_back({position[i],speed[i]});
        }
        sort(p.begin(),p.end(),std::greater<pair<int,int>>());
        stack<float> st; 
        for(auto x:p){
            int pos=x.first;
            int sp=x.second;
            double time=1.0*(target-pos)/sp;
            if(st.empty())st.push(time);
            else if(st.top()<time)st.push(time);
        }
        return st.size();
    }
};
