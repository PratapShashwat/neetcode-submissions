class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        int ans=0;
        stack<int> st;
        for(string x:tokens){
            if(x=="+"){
                int x=st.top();st.pop();
                int y=st.top();st.pop();
                st.push(x+y);
            }
            else if(x=="-"){
                int x=st.top();st.pop();
                int y=st.top();st.pop();
                st.push(y-x);
            }
            else if(x=="*"){
                int x=st.top();st.pop();
                int y=st.top();st.pop();
                st.push(x*y);
            }
            else if(x=="/"){
                int x=st.top();st.pop();
                int y=st.top();st.pop();
                st.push(y/x);
            }
            else st.push(stoi(x));
        }
        return st.top();
    }
};
