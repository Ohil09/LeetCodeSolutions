class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //Sorting
        std::sort(nums.begin(), nums.end());
        //Find the index where copies of val
        int i = 0;
        while(i < nums.size() && nums[i] != val){
            i++;
        }
        //return i, if i equals nums.size()
        if(i == nums.size()){
            return i;
        }

        //find the indecies containing the copies of val
        int j = i;
        while(j < nums.size() && nums[j] == val){
            j++;
        }
        //i to j -1 
        if(j == nums.size()){
            return i;
        }
        //copy non val values in nums
        while(j < nums.size()){
            nums [i] = nums[j];
            i++;
            j++;
        }
        return i;
    }
};