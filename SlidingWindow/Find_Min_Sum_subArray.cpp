#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,6,13,8,9};
    int n=arr.size();
    int k=3;
    int i=0,j=0;
    int sum=0;
    int min_sum=INT_MAX;
    while(i<n){
        sum+=arr[i];
        if(i-j+1<k){
            i++;
        }
        else if(i-j+1==k){
            min_sum=min(min_sum,sum);
            sum-=arr[j];
            j++;
            i++;
        }
    }
    cout<<min_sum<<endl;
    return 0;
}