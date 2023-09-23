#include<iostream>
using namespace std;

int main(){
 int a,b;
 char op;
 while(true){
  cin>>a>>op>>b;
  if(op=='+'){
    cout<<a+b<<'\n';
  }
  if(op=='-'){
    cout<<a-b<<'\n';
  }
  if(op=='*'){
    cout<<a*b<<'\n';
  }
  if(op=='/'){
    cout<<a/b<<'\n';
  }
  if(op=='?'){
    break;
  }
 }
 return 0;
}