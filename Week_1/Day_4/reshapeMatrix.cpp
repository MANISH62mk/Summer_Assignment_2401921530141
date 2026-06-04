#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> arr(r,vector<int>(c,0));
        int m = mat.size();
        int n= mat[0].size();
        if(m*n == r*c){
            for(int i=0;i<r;i++){
                for (int j=0;j<c;j++){
                    int x = i*c+j;
                    arr[i][j]=mat[x/n][x%n];
                }
            }
            return arr;
        }
        return mat;
    }
};