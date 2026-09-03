class Solution {
public:
    int countDigits(int num) {
        int original = num;
        int val, count = 0;

        while (num > 0) {
            val = num % 10;

            if (val != 0 && original % val == 0) {
                count++;
            }

            num = num / 10;
        }
        return count;
    }
};