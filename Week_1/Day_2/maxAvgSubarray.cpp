#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double maxSum= INT_MIN;
        int  n= nums.size();
        double sum = 0;
        double avg = 0;
        for(int i=0;i<k;i++){
            sum +=nums[i];
            
        }
        avg = sum/k;
        maxSum = max(maxSum,avg);

        for(int i=k;i<n;i++){
            sum = sum - nums[i-k]+ nums[i];
            avg = sum/k;
            maxSum = max(maxSum,avg);
            
        }
        

        return maxSum;
    }
};