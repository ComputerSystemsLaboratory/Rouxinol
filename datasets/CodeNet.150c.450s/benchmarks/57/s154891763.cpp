#include<iostream>
using namespace std; 
int main( ){
  int a,b;
  char op;
  while(1){
    cin >> a >> op >> b;
    if( op == '?' )break;
    if( op == '+' )printf("%d\n",a+b);
    if( op == '-' )printf("%d\n",a-b);
    if( op == '*' )printf("%d\n",a*b);
    if( op == '/' )printf("%d\n",a/b);
  }
  return 0;
}