class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=0;
        for(int i=0;i<prices.size();i++)
        {
            int diff=prices[i]-min;
            if(prices[i]<min)
                min=prices[i];
            if(diff>0){
                max+=diff;
                min=prices[i];
            }
        }
        return max;
    }
};