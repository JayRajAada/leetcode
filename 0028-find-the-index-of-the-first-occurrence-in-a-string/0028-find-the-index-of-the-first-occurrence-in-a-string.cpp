class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())  return 0;
        for(int i = 0; i < haystack.size() ; i++){
            int k = i;
            int j = 0;
            while(j < needle.size() && k < haystack.size()){
                if(haystack[k] != needle[j]){
                    break;
                }
                j++;
                k++;
            }
            if(j == needle.size()){
                return i;
            }
        }
        return -1;
    }
};