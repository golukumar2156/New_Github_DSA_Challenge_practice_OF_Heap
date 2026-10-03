#include<iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>>&matrix,int i,int j,int color,int n){
    if(i<0 || j<0 || i>=n || j>=n || matrix[i][j]!=1){
        return;
    }
    matrix[i][j]=color;
    helper(matrix,i+1,j,color,n);
    helper(matrix,i-1,j,color,n);
    helper(matrix,i,j+1,color,n);
    helper(matrix,i,j-1,color,n);
}
int main(){
    vector<vector<int>>matrix={{0,0,0,0,0},
                               {0,0,0,0,0},
                               {0,0,0,0,0},
                               {0,0,0,0,0},
                               {0,0,0,0,0}};
    int n=matrix.size();
    int color=2;
    helper(matrix,1,1,color,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}