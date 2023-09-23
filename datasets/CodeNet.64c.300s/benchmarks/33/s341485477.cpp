#include<iostream>
using namespace std;
int main(void){
  int a,b;
  char c;
  while(1){
    cin>>a>>c>>b;
    if(c=='?')break;
    if(c=='+')cout<<a+b<<endl;
    if(c=='-')cout<<a-b<<endl;
    if(c=='*')cout<<a*b<<endl;
    if(c=='/')cout<<a/b<<endl;
  }
  return 0;
}