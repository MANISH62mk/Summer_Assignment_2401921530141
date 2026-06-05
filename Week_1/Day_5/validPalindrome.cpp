#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        
        for(char ch : s){
            ch = tolower(ch);
            if(isalnum(ch)){
                ans +=ch;
            }
        }
        string rev = ans;
        reverse(rev.begin(),rev.end());
        return ans == rev;
        
    }
};