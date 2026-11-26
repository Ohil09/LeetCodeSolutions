class Solution {
public:
    int titleToNumber(string col) {
        int sum = 0;
        int power = 0;
        int n = col.size();
        for(int i = n - 1; i >= 0; i--){
            int temp = col[i] - 64;
            sum = sum + pow(26, power++) * temp;
        }
        return sum;
    }
};