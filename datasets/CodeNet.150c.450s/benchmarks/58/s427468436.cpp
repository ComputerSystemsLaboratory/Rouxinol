#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;
int main(){

  int x,y;
  stack<int> S;
  char s[100];
  
  while(cin >> s){
    
    if(s[0] == '+'){
      x=S.top();
      S.pop();
      y=S.top();
      S.pop();
      S.push(x+y);
    }else if(s[0] == '-'){
      x=S.top();
      S.pop();
      y=S.top();
      S.pop();
      S.push(y-x);
    }else if(s[0] == '*'){
      x=S.top();
      S.pop();
      y=S.top();
      S.pop();
      S.push(x*y);
    }else{
      x = atoi(s);
      S.push(x);
    }
    
  }
  
  cout <<S.top()<<endl;
  
  return 0;
}