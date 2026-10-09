#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    int arr[]={1,2,3,3,3,1};
    int m=sizeof(arr)/sizeof(arr[0]);
    int minrep=0;
    unordered_map<int,int>mp;
    for(int x:arr){
        mp[x]++;
    }
    for(auto it:mp){
        if(it.second>minrep){
            minrep=it.second;
        }
    }
    cout << m - minrep << endl;
    return 0;
}