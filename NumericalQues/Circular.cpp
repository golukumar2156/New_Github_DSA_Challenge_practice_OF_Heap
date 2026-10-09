#include<iostream>
using namespace std;
int main(){
    int n=5;
    int start=4;
    int arr[]={1,3,2};
    int m=sizeof(arr)/sizeof(arr[0]);
    int cur=start;
    int cost=0;
    for(int i:arr){
        cost+=(i-cur+n)%n;
        cur=i;
    }
    cout << cost << endl;
    return 0;
}