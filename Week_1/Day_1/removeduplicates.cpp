#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto x = unique(nums.begin(),nums.end());
        return x-nums.begin();
        
    }
};