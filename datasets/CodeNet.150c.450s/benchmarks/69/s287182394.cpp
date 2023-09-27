// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0033

#include <iostream>
#include <tuple>
#include <stack>
using namespace std;

typedef tuple<int, int, int> st;

int main() {
  int N;
  cin >> N;
  for (auto i=0; i<N; i++) {
    int X[10];
    for (auto j=0; j<10; j++) {
      cin >> X[j];
    }
    stack<st> S;
    S.push(make_tuple(0, 0, 0));
    while (!S.empty()) {
      int now = get<0>(S.top());
      if (now == 10) goto EXIT;
      int R[2] = { get<1>(S.top()), get<2>(S.top()) };
      S.pop();
      int A = X[now];
      for (auto k=0; k<2; k++) {
	if (R[k] < A) {
	  S.push(make_tuple(now+1, A, R[(k+1)%2]));
	}
      }
    }
    printf("NO\n");
    continue;
  EXIT:
    printf("YES\n");
    continue;
  }
}