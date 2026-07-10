class MinStack {
public:
    stack<long long> st;
    long long m;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){st.push(0);m=val;}
        else {st.push(val-m);if(m>val)m=val;}
            
    }
    
    void pop() {
        if(st.top()<0)m=m-st.top();
        st.pop();
    }
    
    int top() {
        if(st.top()<0)return m;
        return st.top()+m;
    }
    
    int getMin() {
        return m;
    }
};
