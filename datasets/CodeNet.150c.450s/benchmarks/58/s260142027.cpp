#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <stack>

using namespace std;

int main() {

  string c;
  stack<int> st;  
  int a,b;

  while(cin >> c){
    if(c=="+"||c=="-"||c=="*"){
      a = st.top();
      st.pop();
      b = st.top();
      st.pop();
      if(c=="+") st.push(a+b);
      if(c=="-") st.push(b-a);
      if(c=="*") st.push(a*b);
    }
    else st.push(atoi(c.c_str()));
  }
  cout << st.top() << endl;
  
}