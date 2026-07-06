class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        reverse(a.begin() , a.end());
        reverse(b.begin() , b.end());
        int n = max(a.size(), b.size());
        for(int i = 0; i < n; i++){
            int digitA = (i < (int)a.size()) ? (a[i] - '0'): 0 ;
            int digitB = (i < (int)b.size()) ? (b[i] - '0'): 0 ;

            int total = digitA + digitB + carry;
            char ch = (total % 2) + '0';
            res = ch + res;
            carry = total / 2;
        }
        if(carry){
            res = "1" + res;
        }
        return res;
    }
};