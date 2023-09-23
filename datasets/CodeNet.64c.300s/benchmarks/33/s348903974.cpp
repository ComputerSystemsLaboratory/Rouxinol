#include<iostream>
using namespace std;



int main(){
int a,b;
char z;
while(true){
  cin>>a>>z>>b;
  if(z=='?')
  break;
  if(z=='+')
  cout<<a+b;
  if(z=='-')
  cout<<a-b;
  if(z=='*')
  cout<<a*b;
  if(z=='/')
  cout<<a/b;
  cout<<endl;
}
return 0;
}