#include <cstdio>
#include <stack>
#include <queue>
using namespace std;

int n;
int r;
int p;
int c;

int main() {
  while (1) {
    scanf("%d%d", &n, &r);
    if (n == 0 && r == 0) return 0;

    stack<int> st;
    for (int i=1; i<=n; i++) {
      st.push(i);
    }

    while (r--) {
      stack<int> st2, st3;

      scanf("%d%d", &p, &c);
      for (int i=0; i<p-1; i++) {
        int t = st.top(); st.pop();
        st2.push(t);
      }

      for (int i=0; i<c; i++) {
        int t = st.top(); st.pop();
        st3.push(t);
      }

      while (!st2.empty()) {
        int t = st2.top(); st2.pop();
        st.push(t);
      }

      while (!st3.empty()) {
        int t = st3.top(); st3.pop();
        st.push(t);
      }
    }

    printf("%d\n", st.top());
  }
}