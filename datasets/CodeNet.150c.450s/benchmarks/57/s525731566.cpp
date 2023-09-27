#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  char p[2];
  cin>>a>>p>>b;
  while(p[0]!='?'){
    if(p[0]=='+')cout<<a+b<<endl;
    if(p[0]=='-')cout<<a-b<<endl;
    if(p[0]=='*')cout<<a*b<<endl;
    if(p[0]=='/')cout<<a/b<<endl;
    cin>>a>>p>>b;
  }
  return 0;
}