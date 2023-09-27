#include<iostream>
using namespace std;
int main(){
int a,b;
char c;
for(int i=0;;i++){
cin>>a>>c>>b;
if(c=='+')
cout<<a+b<<endl;
if(c=='-')
cout<<a-b<<endl;
if(c=='*')
cout<<a*b<<endl;
if(c=='/')
cout<<a/b<<endl;
if(c=='?'){
return 0;}}
return 0;
}