#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,6,13,8,9};
    int n=arr.size();
    int k=3;
    int i=0,j=0;
    int sum=0;
    int max_sum=0;
    while(i<n){
        sum+=arr[i];
        if(i-j+1<k){
            i++;
        }
        else if(i-j+1==k){
            max_sum=max(max_sum,sum);
            sum-=arr[j];
            j++;
            i++;
        }
    }
    cout<<max_sum<<endl;
    return 0;
}