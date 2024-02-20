class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        int l = 0,r =0;
        // 0 1 2 3
        while(r < nums.size()){
            while(r-l < k){
                pq.push({nums[r],r});
                r++;
            }
            while(!pq.empty() && l - pq.top().second >= 1){
                pq.pop();
            }
            // only the max matter and if the max is out of the array 
            // remove it
            l++;
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};