#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int a,b;
  char op[1];
  
  while(1){
    scanf(" %d %c %d",&a,&op[0],&b);
    if(op[0]=='?')break;
    if(op[0]=='+')cout << a+b << endl;
    else if(op[0]=='-')cout << a-b << endl;
    else if(op[0]=='/')cout << a/b << endl;
    else if(op[0]=='*')cout << a*b << endl;
  }
  
  return 0;

}