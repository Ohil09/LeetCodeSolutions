class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n,a_sum = 0, ex_sum = 0;
        n = nums.size();
        for(int i = 0; i < n; i++){
            a_sum += nums[i];
        }
        ex_sum = n * (n + 1) / 2;
        return ex_sum - a_sum;
    }
};