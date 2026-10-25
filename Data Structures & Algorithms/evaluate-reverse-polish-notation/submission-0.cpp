class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if( tokens[i] != "+" && tokens[i] != "-" 
                && tokens[i]!="*"&& tokens[i] != "/"){
                st.push(stoi(tokens[i]));
               }else{
                    int op1 = st.top();
                    st.pop();
                    int op2 = st.top();
                    st.pop();
                    int val;
                    if(tokens[i]=="+")val = op2 + op1;
                    else if(tokens[i]=="-")val = op2 - op1;
                    else if(tokens[i]=="*")val = op2 * op1;
                    else val = op2/op1;
                    st.push(val);
               }
        }
        return st.top();
    }
};
