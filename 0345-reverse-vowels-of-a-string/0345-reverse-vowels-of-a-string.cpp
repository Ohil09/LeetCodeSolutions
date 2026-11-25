class Solution {
public:
    string reverseVowels(string s) {
        string vow;
        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||
                s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U'){
                    vow += s[i];
            }
        }
        int k = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||
                s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U'){
                    s[i] = vow[k];
                    k++;
            }
        }
        return s;
    }
};