#include<cstdio>
#include<iostream>
using namespace std;

int main(){
 int a,b,f=0;
 char op;

 while(1){
 cin >> a >> op >> b;

 switch(op){
  case '+':
   cout << a + b << endl ;
   break;
  case '-':
   cout << a-b << endl;
   break;
  case '*':
   cout << a*b << endl;
   break;
  case '/':
   cout << a/b << endl;
   break;
  case '?':
   f = 1;
   break;
  default:
   break;
 }
  if(f==1)break;
 }

 return 0;
}