class Solution {
public:
    bool isValid(string s) {
      stack<int> st;
      for(char c:s){
        if(c=='(')st.push(0);
        else if(c=='[')st.push(1);
        else if(c=='{')st.push(2);
        else if(c==')' && !st.empty() && st.top()==0)st.pop();
        else if(c==']' && !st.empty() && st.top()==1)st.pop();
        else if(c=='}' && !st.empty() && st.top()==2)st.pop();
        else return false;
      }
      if(st.empty())return true;
      return false;  
    }
};
