#include<iostream>
#include<string>
#include<stack>
#include<cstdlib>
using namespace std;

int main(){
  string s;
  stack <int> t;
  int a,b;

  while(cin>>s){
    if(s=="+"){
      b=t.top();t.pop();
      a=t.top();t.pop();
      a=a+b;t.push(a);
   }
    else if(s=="-"){
      b=t.top();t.pop();
      a=t.top();t.pop();
      a=a-b;t.push(a);
  }
    else if(s=="*"){
      b=t.top();t.pop();
      a=t.top();t.pop();
      a=a*b;t.push(a);
    }
    else{
      t.push(atoi(s.c_str()));
    }
  }
  cout<<t.top()<<endl;
  return 0;
}