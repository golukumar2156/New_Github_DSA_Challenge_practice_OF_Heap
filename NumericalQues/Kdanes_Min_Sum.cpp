#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n=arr.size();
    int max_sum=arr[0], current_sum=arr[0];
    for(int i=1;i<n;i++){
        int v1=arr[i]+current_sum;
        int v2=arr[i];
        current_sum=min(v1,v2);
        max_sum=min(max_sum,current_sum);
    }
    cout<<max_sum;
    return 0;
}