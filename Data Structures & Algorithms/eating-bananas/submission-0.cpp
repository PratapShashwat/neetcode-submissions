class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //1 to 10^9
        int l=1,r=1000000000;
        while(l<=r){
            int m=(r-l)/2+l;
            int d=0;
            for(auto x:piles)d+=(x+m-1)/m;
            if(d<=h){r=m-1;}
            else if(d>h)l=m+1;
        }
        return r+1;
    }
};
