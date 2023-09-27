#include <cstdio>
#include <stack>
using namespace std;

int n;
stack<int> st;

int main() {
  while (1) {
    if (scanf("%d", &n) != 1) break;
    if (n == 0) {
      printf("%d\n", st.top());
      st.pop();
    } else {
      st.push(n);
    }
  }
}