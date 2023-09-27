#include<iostream>
#include<stack>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
  stack<int> S;
  char c[10];
  int x,y;
  while((scanf("%s",&c))!=EOF){
    if(c[0]=='+'){
      x=S.top();S.pop();
      y=S.top();S.pop();
      S.push(x+y);
    }
    else if(c[0]=='-'){ 
      x=S.top();S.pop();
      y=S.top();S.pop();
      S.push(y-x);
    }
    else if(c[0]=='*'){
      x=S.top();S.pop();
      y=S.top();S.pop();
      S.push(x*y);
    }
    else{
      S.push(atoi(c));
    }
  }
  cout<<S.top()<<endl;
  return 0;
}