class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }
        for (int i = 0; i <=(int)haystack.size() - (int)needle.size() ; i++){
            for(int j = 0; j < (int)needle.size(); j++){
                if(haystack[i + j] != needle[j]){
                    break;
                }
                if(j == (int)needle.size()-1){
                    return i;
                }
            }
        }
        return -1;
    }
};