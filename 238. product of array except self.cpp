class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //sum / i  = ans
        // ans * i = sum
        // 1  2  3 4
        // 1  2  6 24 left
        //24  24 12 4 right
        vector<int>left(nums.size());
        vector<int>right(nums.size());
        left[0] = nums[0];
        for(int i =1;i<nums.size();i++){
            left[i] = nums[i] * left[i-1];
        }
        right[nums.size()-1] =nums[nums.size()-1]; 
        for(int i =nums.size()-2;i>=0;i--){
            right[i] = nums[i] * right[i+1];
        }
        vector<int>ans(nums.size());
        for(int i =0;i<nums.size();i++){
            ans[i] = (i-1 >= 0 ? left[i-1] : 1 ) * (i+1 < nums.size() ?  right[i+1] : 1);
        }
        // a     b     c    d
        // a     ab    abc   abcd
        // abcd  bcd   cd    d
        //sum(4)
 
            return nums = ans;
    }
};