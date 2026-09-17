class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0];
        int high = 0;
        for(int i = 0; i < prices.size(); i++){
            if(i == prices.size()){
                return 0;
            }
            if(prices[i] < low ){
                low = prices[i];
            }  
            else if(prices[i] - low > high){
                high = prices[i] - low;
            }
            
        }
        return high;
    }
};