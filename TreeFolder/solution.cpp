#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map<int,int>mp;
   vector<int>ans={1,3,4,2,4,2,5,2,1,3,5};
    for(int x:ans){
        mp[x]++;
         if(mp[x]>1){
          cout<<x<<" "<<endl;  
          break;
        }
    }
    return 0;

}