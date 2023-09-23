#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){

  int a,b,ans;
  char opr;

  while(1){
  cin >>a >>opr >>b;
    switch(opr){
    case '+': ans=a+b; cout<<ans; break;
    case '-': ans=a-b; cout<<ans; break;
    case '*': ans=a*b; cout<<ans; break;
    case '/': ans=a/b; cout<<ans; break;
    case '?': break;
    }
    if(opr=='?') break;
    cout <<endl;
  }
  return 0;
}