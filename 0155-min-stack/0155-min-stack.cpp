class MinStack {
public:
    stack <long long> st;
    long long min_i;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            min_i = value;
        }
        else{
            if(value >= min_i)   st.push(value);
            else{
                st.push(2LL * value - min_i);
                min_i = value;
            }
        }
    }
    
    void pop() {
        if(st.empty())  return;
        long long n = st.top();
        st.pop();
        if(n < min_i)   min_i = 2LL * min_i - n;
    }
    
    int top() {
        if(st.empty())  return -1;
        long long n = st.top();
        if(n < min_i)   return min_i;
        return n;
    }
    
    int getMin() {
        return min_i;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */