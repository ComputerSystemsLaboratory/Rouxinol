#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

int pop(stack<int> &s){
  int x = s.top();
  s.pop();
  return x;
}

int main(){
  stack<int> st;
  string c;
  while(cin >> c){
    int m, n;
    if(c == "+"){
      n = pop(st);
      m = pop(st);
      st.push(m+n);
    }
    else if (c == "-"){
      n = pop(st);
      m = pop(st);
      st.push(m-n);
    }
    else if (c == "*"){
      n = pop(st);
      m = pop(st);
      st.push(m*n);
    }
    else
      st.push(atoi(c.c_str()));
  }
  cout << st.top() << endl;
}

