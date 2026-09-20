#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int>&ans,int capacity){
    int j=0;
    int i=0;
    int sumcurr=0;
    int maxlen=0;
    while(i<ans.size()){
        sumcurr+=ans[i];
        while(sumcurr>capacity){
            sumcurr-=ans[j];         
            j++;
        }
           maxlen=max(maxlen,i-j+1);
        i++;
    }
    return maxlen;
}
int main(){
      vector<int>ans={1,1,3,1,4,5};
      int capacity=6;
      cout<<helper(ans,capacity)<<endl;
      return 0;
} 