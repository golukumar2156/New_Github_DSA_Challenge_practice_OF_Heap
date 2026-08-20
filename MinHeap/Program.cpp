#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
 int arr[]={1,5,2,-4,3,-1,-9};
 int m=sizeof(arr)/sizeof(arr[0]);
 priority_queue<int>minHeap;
 int k;
 cout<<"Enter the value of k: ";
 cin>>k;

 for(int i=0;i<m;i++){
    minHeap.push(arr[i]);
 }

//  find the k largest elements
 for(int i=0;i<k;i++){
    cout<<minHeap.top()<<" ";
    minHeap.pop();
 }
 return 0;
}