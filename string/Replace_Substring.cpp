#include<iostream>
using namespace std;
int main(){
    string text="This is cat";
    string os="cat";
    string ns="dog";
    string result="";
    string temp="";
    for(int i=0;i<text.length();i++){      
        if(text[i]==' '){
            if(temp==os){
                result+=ns;
            }
            else{
                result+=temp;
            }
            result+=' ';
            temp="";
        }
        else {
            temp += text[i];
        }
    }
    if(temp==os){
        result+=ns;
    }
    else{
        result+=temp;
    }   
    cout<<result<<endl;
    return 0;
}