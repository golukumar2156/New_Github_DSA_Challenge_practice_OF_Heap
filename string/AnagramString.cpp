#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s1="listen";
    string s2="silente";
    vector<int>fre(26,0);
    if(s1.size()!=s2.size()){
        cout<<"Not Anagram";
        return 0;
    }
    for(int i=0;i<s1.size();i++){
        fre[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++){
        fre[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(fre[i]!=0){
            cout<<"Not Anagram";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;
}