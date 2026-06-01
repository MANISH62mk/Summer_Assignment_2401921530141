#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit=-1;
        // int maxm=0;
        // for(int i=0;i<prices.size()-1;i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[j]>prices[i]){
        //             profit=prices[j]-prices[i];
        //             maxm = max(maxm,profit);
        //         } 
        //     }
        // }
        // return maxm;  
        int minprice = INT_MAX;
        int maxprofit = 0;
        for(int i=0;i<prices.size();i++){
            minprice= min(minprice,prices[i]);
            int profit= prices[i] - minprice;
            maxprofit= max(maxprofit,profit);
        }      
        return maxprofit;
    }
};