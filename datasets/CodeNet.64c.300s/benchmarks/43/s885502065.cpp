#include<iostream>
using namespace std;

int main(){

 int a,aa,aaa,aaaa,b,bb,bbb,bbbb,s,t;
 cin>>a>>aa>>aaa>>aaaa>>b>>bb>>bbb>>bbbb;

 s=a+aa+aaa+aaaa;
 t=b+bb+bbb+bbbb;
 
 if(s>=t)
  cout<<s<<'\n';
 else
  cout<<t<<'\n';

return 0;
}