class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i =0;i<s.size();i++){        
            if(!st.empty() && st.top() == s[i]){
                char ttop = st.top();
                while(!st.empty() && st.top() == ttop){
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string ans;
        ans.resize(st.size());
        for(int i = st.size()-1; i>=0;i--){
           ans[i] = st.top();
           st.pop();
        }
        return ans;

    }
};