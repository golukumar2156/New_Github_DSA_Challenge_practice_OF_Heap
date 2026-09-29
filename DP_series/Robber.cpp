#include<iostream>
#include<vector>
using namespace std;
vector<int>dp;
int helper(vector<int>& nums, int i){
    int n=nums.size();
    if(i==n) return nums[i];
    if(i==n-1) return max(nums[i],nums[i-1]);
    if(dp[i]!=-1) return dp[i];
    return dp[i]=max(nums[i]+helper(nums,i+2),helper(nums,i+1));
}
int main(){
    vector<int>nums={5,7,1,10,9};
    dp.resize(nums.size(),-1);
    cout<<helper(nums,0)<<endl;
    return 0;
}