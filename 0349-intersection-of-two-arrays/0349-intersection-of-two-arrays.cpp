class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int res[1000];
        int k = 0;

        for(int i = 0; i < nums1.size(); i++){
            bool ifExists = false;

            for(int x = 0; x < k; x++){
                if(res[x] == nums1[i]){
                    ifExists = true;
                    break;
                }
            }

            if(ifExists){
                continue;
            }

            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    res[k] = nums1[i];
                    k++;
                    break;
                }
            }
        }
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(res[i]);
        }
    return ans;
    }
};