class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i =0;i<asteroids.size();i++){
            bool broke = false;
            if(asteroids[i] <= 0){
            while(!st.empty()){
                if(st.top() <= 0){
                    break;
                }
                else if(-asteroids[i] > st.top()){
                    st.pop();
                }
                else if(-asteroids[i] < st.top()){
                    broke = true;
                    break;
                }
                else{
                    st.pop();
                    broke = true;
                    break;
                    }
                }
            }
            if(!broke)
                st.push(asteroids[i]);
           // asteroid > top destroy top
           // asteroid < top destroy asteroid break
           // asteroid == top destroy both and break 
        }
        vector<int>ans(st.size());
        int cnt = st.size()-1;
        while(!st.empty()){
            ans[cnt--] = st.top();
            st.pop();
        }
        return ans;
        
    }
};