#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <algorithm>
using namespace std;
int main(void){
  stack<int> s;
  int a,b;
  string n;
  while(cin>>n){
    if(isdigit(n[0]))
      s.push(atoi(n.c_str()));
    else{
      a=s.top();
      s.pop();
      b=s.top();
      s.pop();
      if(n[0]=='+')
	b+=a;
      else if(n[0]=='-')
	b-=a;
      else if(n[0]=='*')
	b*=a;
      s.push(b);
    }
  }
  cout<<s.top()<<endl;
  return 0;
}