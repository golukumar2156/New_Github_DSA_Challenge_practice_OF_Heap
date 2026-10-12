#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,6,7,-4,-1, 2, 3, 4, 5};
    int n=arr.size();
    int max_sum=arr[0], current_sum=arr[0];
    int s=0,e=0,temp=0;
    for(int i=1;i<n;i++){
        int v1=arr[i]+current_sum;
        int v2=arr[i];
        if(v2>v1){
            current_sum=v2;
            temp=i;
        }else{
            current_sum=v1;
        }
       if(current_sum>max_sum){
            max_sum=current_sum;
            s=temp;
            e=i;
       }
    }
    cout<<max_sum;

    return 0;
}