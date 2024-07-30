class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max= INT_MIN;
        int min=INT_MAX;
        int n = prices.size();
         for(int i=0;i<n;i++){
            if(min>prices[i]){
                min=prices[i];
            }

            int m = prices[i]-min;

            if(m>max){
                max=m;
            }

         }

        return max;
    }
};