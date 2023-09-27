#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define llong long long

int main() {
  stack<int> st;
  int in;
  while(scanf("%d",&in) != EOF) {
    if(in == 0) {
      printf("%d\n",st.top());
      st.pop();
    }
    else {
      st.push(in);
    }
  }
  return 0;
}