#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>
 
using namespace std;
 
/* constant */
 
/* typedef */
 
typedef stack<int> si;
 
/* global variables */
 
/* subroutines */
 
/* main */
 
int main() {
  si st;
 
  for (;;) {
    string s;
    cin >> s;
    if (cin.eof()) break;
 
    if (s[0] == '+') {
      int b = st.top(); st.pop();
      int a = st.top(); st.pop();
      st.push(a + b);
    }
    else if (s[0] == '-') {
      int b = st.top(); st.pop();
      int a = st.top(); st.pop();
      st.push(a - b);
    }
    else if (s[0] == '*') {
      int b = st.top(); st.pop();
      int a = st.top(); st.pop();
      st.push(a * b);
    }
    else
      st.push(atoi(s.c_str()));
  }
 
  printf("%d\n", st.top());
  return 0;
}

