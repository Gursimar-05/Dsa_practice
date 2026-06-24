class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> st;
        for(string i:operations){
           if(i=="C" && !st.empty()){
             st.pop();
           }else if(i=="D" && !st.empty()){
             int n = st.top();
             st.push(n*2);
           }else if(i=="+"&& st.size()>=2){
             int first=st.top();
             st.pop();
             int second=st.top();
             int sum=first+second;
             st.push(first);
             st.push(sum);
           }else{
             st.push(stoi(i));
           }
        }
        int res=0;
         while(!st.empty()){
            res+=st.top();
            st.pop();
         }
          return res;
         }
    
};