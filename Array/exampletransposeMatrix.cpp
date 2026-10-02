#include<iostream>
#include<vector>
using namespace std;
void display(vector<vector<int>> &matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int n = matrix.size();
    vector<vector<int>> transpose(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transpose[i][j] = matrix[j][i];
        }
    }
    cout<<"Original Matrix:"<<endl;
    display(matrix);
    cout<<"Transposed Matrix:"<<endl;
    display(transpose); 
    return 0;
}