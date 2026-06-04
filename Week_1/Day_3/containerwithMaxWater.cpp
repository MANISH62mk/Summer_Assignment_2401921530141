#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 1;
        int maxWater = INT_MIN;

        int j=height.size()-1;

        for(int i=0;i<height.size();){
            
            if(height[i]<=height[j]){
                water= height[i]*(j-i);
                i++;
                maxWater = max(maxWater,water);

            }
            else{
                water= height[j]*(j-i);
                j--;
                maxWater = max(maxWater,water);

            }
        }
        return maxWater;
        
    }
};