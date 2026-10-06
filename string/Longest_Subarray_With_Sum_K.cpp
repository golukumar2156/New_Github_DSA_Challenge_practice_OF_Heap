#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>n={1,2,3,4,5,6,7,8,9};
    int k;
    cin >> k;
    int n_size=n.size();
    int i=0,j=0;
    int sum=0;
    int max_length=0;
    while(i<n_size){
        sum+=n[i];
        while(sum>k){
            sum-=n[j];
            j++;
        }
        max_length=max(max_length,i-j+1);
        i++;
    }
    cout << max_length << endl;
    return 0;
}