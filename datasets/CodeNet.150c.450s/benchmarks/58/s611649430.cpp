#include<iostream>
#include<cstdio>
#include<stack>
#include<string>
#include<cstdlib>
using namespace std;

stack<int>sta;

int main(){
  char n[11111];
  
  while(scanf(" %s",n)!=EOF){

    if(n[0]=='+'){
      int a=sta.top(); sta.pop();
      int b=sta.top(); sta.pop();
      a=a+b;
      sta.push(a);
    }else if(n[0]=='-'){
      int b=sta.top(); sta.pop();
      int a=sta.top(); sta.pop();
      a=a-b;
      sta.push(a);
    }else if(n[0]=='*'){
      int a=sta.top(); sta.pop();
      int b=sta.top(); sta.pop();
      a=a*b;
      sta.push(a);
    }else{
      sta.push(atoi(n));
    }
    
    //cout << sta.top() << endl;

  }
  
  cout << sta.top() << endl;
  
  return 0;
  
}