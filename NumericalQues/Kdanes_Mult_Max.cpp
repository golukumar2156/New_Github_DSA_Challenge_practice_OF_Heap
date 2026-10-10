#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n=arr.size();
    int min_mul=arr[0];
    int max_mul=arr[0];
    int res_mul=arr[0];
    for(int i=1;i<n;i++){
        int v1=arr[i]*min_mul;
        int v2=arr[i];
        int v3=arr[i]*max_mul;
        min_mul=min(v1,min(v2,v3));
        max_mul=max(v1,max(v2,v3));
        res_mul=max(res_mul,max_mul);
    }
    cout<<res_mul;
    return 0;
}