#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    string str2;
    string b;
    int count=0,a;
    cin>>str1;
    while(true){
        b="";
        cin>>str2;
        a=str2.size();
        if(str2=="END_OF_TEXT") break;
        for(int i=0;i<a;i++){
            b+=tolower(str2[i]);
        }
        if(str1==b) count+=1;
    }cout<<count<<endl;
    return 0;
}
