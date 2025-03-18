class Solution {
public:
    string removeDuplicates(string s) {
       stack<char> st;
           for(auto i:s){
            bool flag=1;
            while(!st.empty()&&i==st.top()){
                st.pop();
                flag=0;
            }
            if(flag) st.push(i);
           }
           string m;
           while(!st.empty()){
              m+=st.top();
              st.pop();
           }
           reverse(m.begin(),m.end());
       
       return m;
    }
};