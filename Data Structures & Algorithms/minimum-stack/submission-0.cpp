class MinStack {
public:
    MinStack() {
        
    }
    stack<pair<int,int>>st;
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }else{
            int minVal = st.top().second;
            if(val > minVal){
                st.push({val,minVal});
            }else{
                st.push({val,val});
            }
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
