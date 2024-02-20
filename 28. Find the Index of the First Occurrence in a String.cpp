class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size()){
            return -1;
        }
        for(int i =0;i<=haystack.size() - needle.size();i++){
            if(haystack[i] == needle[0]){
                int ans = i;
                bool f = true;
                for(int j = i+1;(j-i)<needle.size();j++){
                    if(haystack[j] != needle[j-i]){
                        f=false;
                        break;
                    }
                }
                if(f)
                return ans;
            }
        }
        return -1;
    }
};