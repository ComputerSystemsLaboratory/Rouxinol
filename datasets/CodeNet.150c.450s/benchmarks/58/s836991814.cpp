#include<bits/stdc++.h>
using namespace std;

int main(){
  int num1,num2;
  stack<int>sck;
  string str;
  int num[10];
  int cnt;
  while(cin>>str){
    if(str=="+"){
      num1=sck.top();sck.pop();
      num2=sck.top();sck.pop();
      sck.push(num1+num2);
    }
    else if(str=="*"){
      num1=sck.top();sck.pop();
      num2=sck.top();sck.pop();
      sck.push(num1*num2);
    }
    else if(str=="-"){
      num1=sck.top();sck.pop();
      num2=sck.top();sck.pop();
      sck.push(num2-num1);
    }
    else {
      sck.push(atoi(str.c_str()));
    }
  }
  cout<<sck.top()<<endl;
}