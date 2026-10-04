#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>dp;
int helper(vector<vector<int>>&nums,int i,int j,int n,int m){
    if(i<0 || j<0 || i>=n ||j>=m ){
        return 0;
    }
    if(i==n-1 && j==m-1){
        return 1;
    }
    if(nums[i][j]==1){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    return dp[i][j]=helper(nums,i+1,j,n,m)+helper(nums,i,j+1,n,m);
}
int main(){
    vector<vector<int>>nums={
         {0,1},
         {0,2}                  
    }; 
    int n=nums.size();
    int m=nums[0].size();
    dp.clear();
    dp.resize(n,vector<int>(m,-1));
    cout<<helper(nums,0,0,n,m);
    return 0;
}