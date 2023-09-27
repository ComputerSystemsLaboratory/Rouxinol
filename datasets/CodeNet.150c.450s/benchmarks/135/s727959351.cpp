#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int N, M, t, S_h, S_w, ans, a, b, c, d;
  while (cin >> N >> M, N) {
    vector<int> h, w;
    ans = 0;
    for (int i = 0; i < N; ++i) {
      cin >> t;
      h.push_back(t);
    }
    for (int i = 0; i < M; ++i) {
      cin >> t;
      w.push_back(t);
    }
    for (int i = 2; i < N+1; ++i) {
      t = 0;
      for (int j = 0; j < i; ++j) t += h[j];
      h.push_back(t);
      for (int j = i; j < N; ++j) {
	t += h[j];
	t -= h[j-i];
	h.push_back(t);
      }
    }
    sort(h.begin(), h.end());
    for (int i = 2; i < M+1; ++i) {
      t = 0;
      for (int j = 0; j < i; ++j) t += w[j];
      w.push_back(t);
      for (int j = i; j < M; ++j) {
	t += w[j];
	t -= w[j-i];
	w.push_back(t);
      }
    }
    sort(w.begin(), w.end());
    S_h = h.size();
    S_w = w.size();
    a = 0;
    b = 0;
    while (a < S_h && b < S_w) {
      if (h[a] < w[b]) ++a;
      else if (h[a] > w[b]) ++b;
      else {
	c = a;
	d = b;
	while (h[a] == h[c]) ++a;
	while (w[b] == w[d]) ++b;
	ans += (a-c)*(b-d);
      }
    }
    cout << ans << endl;
  }
}