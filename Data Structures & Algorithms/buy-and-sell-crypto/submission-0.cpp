class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = -1e9;
        for(int i=0;i<n;i++){
            int buy = prices[i];
            for(int j=i+1;j<n;j++){
                int sell = prices[j];
                int profit = sell-buy;
                maxProfit = max(maxProfit,profit);
            }
        }
       if(maxProfit<0)return 0;
       else
       return maxProfit;
    }
};
