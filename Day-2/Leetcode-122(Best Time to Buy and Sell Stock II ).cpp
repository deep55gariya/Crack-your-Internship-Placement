class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int start = prices[0];
        int max=0;
        for(int i=1;i<len;i++){
            if(start<prices[i]){
                max=max +prices[i]- start;
            }

            start = prices[i];
        }
        return max;
    }
};