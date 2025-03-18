class Solution {
public:
    // string removeDuplicates(string s) {
    //    stack<char> st;
    //        for(char i:s){
    //         bool flag=1;
    //         while(!st.empty()&&i==st.top()){
    //             st.pop();
    //             flag=0;
    //         }
    //         if(flag) st.push(i);
    //        }
    //        string m;
    //        while(!st.empty()){
    //           m+=st.top();
    //           st.pop();
    //        }
    //        reverse(m.begin(),m.end());
       
    //    return m;
    // }
        string removeDuplicates(string s) {
        int i = 0, n = s.length();
        for (int j = 0; j < n; j++, i++) {
            s[i] = s[j];
            if (i > 0 && s[i - 1] == s[i]) 
                i -= 2;
        }
        return s.substr(0, i);
    }
};