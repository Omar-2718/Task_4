class Solution {
public:
    bool isValid(string s) {
    
        // ()(
        stack<char>st;
        map<char,char>mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';

        for(int i =0;i<s.size();i++){
            if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(!st.empty() && st.top() == mp[s[i]])
                st.pop();
                else
                return false;
            }
            else
            st.push(s[i]);
        }
        return !st.size();
    }
};