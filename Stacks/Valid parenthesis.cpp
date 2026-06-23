class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char i:s){
            if(i=='('|| i=='['||i=='{'){
                st.push(i);
            }
            if(i==')'){
                if(st.empty()||st.top()!='('){
                    return false;
                }
                st.pop();
            }
            if(i==']'){
                if(st.empty()||st.top()!='['){
                    return false;
                }
                st.pop();
            }
            if(i=='}'){
                if(st.empty()||st.top()!='{'){
                    return false;
                }
                st.pop();
            }

        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};