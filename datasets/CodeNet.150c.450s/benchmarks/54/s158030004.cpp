#include<cstdio>
#include<cctype>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int a=0;
    string s,t;
    int ap;
    cin>>t;
    for(int i=0;i<t.size();i++){
        t[i]=tolower(t[i]);
    }
    while(1){
    cin>>s;
    if(s=="END_OF_TEXT") break;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    ap=s.find(t);
    if(ap!=-1&&t.size()==s.size())a+=1; 
    }
    cout<<a<<endl;
}
