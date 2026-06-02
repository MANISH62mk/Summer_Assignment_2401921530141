#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j])
        //             return true;
        //     }

        // }
        // return false;

        unordered_set<int> st;


        for(int i=0; i<nums.size();i++){
            if(st.find(nums[i])!=st.end())
                return true;
            st.insert(nums[i]);
        }
        return false; 
    }
};