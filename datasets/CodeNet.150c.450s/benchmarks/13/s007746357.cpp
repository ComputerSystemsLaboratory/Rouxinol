#include<cstdio>
#include<cctype>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int a=0;
    int b=0;
    int c=0;
    string s,t,ss;
    int ap;
    cin>>s>>t;
    ss=s+s;
    ap=ss.find(t);
    if(ap!=-1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}
