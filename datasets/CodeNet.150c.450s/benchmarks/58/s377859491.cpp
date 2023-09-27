#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  stack<int> st;
  string c;
  while(cin >> c) {
    if(c == "+") {
      int a = st.top(); st.pop();
      int b = st.top(); st.pop();
      st.push(a+b);
    }
    else if(c == "-") {
      int a = st.top(); st.pop();
      int b = st.top(); st.pop();
      st.push(b-a);
    }
    else if(c == "*") {
      int a = st.top(); st.pop();
      int b = st.top(); st.pop();
      st.push(a*b);
    }
    else {
      st.push(atoi(c.c_str()));
    }
  }
  cout << st.top() << endl;
}