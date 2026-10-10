#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int>&ans,int capacity){
    int j=0;
    int i=0;
    int sumcurr=0;
    int maxLen=0;
    int n=ans.size();
    while(i<n){
        sumcurr+=ans[i];
        while(sumcurr>capacity){
            sumcurr-=ans[j];
            j++;
        }
        maxLen=max(maxLen,i-j+1);
        i++;
    }
   return maxLen;
}
int main(){
      vector<int>ans={1,1,2,1,1,5};
      int capacity=6;
      cout<<helper(ans,capacity)<<endl;
      return 0;
} 