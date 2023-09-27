#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int hhmmss_to_i(int h, int m, int s) {
  return (h * 60 + m) * 60 + s;
}

int main() {
  int n;
  while (scanf("%d", &n) != EOF && n) {
    vector<pair<int,bool>> V; // firstは時刻、boolは出発ならtrue、到着ならfalse
    for (int i=0; i<n; i++) {
      int h, m, s;
      scanf("%02d:%02d:%02d", &h, &m, &s);
      int t = hhmmss_to_i(h, m, s);
      V.push_back(make_pair(t, true));
      scanf("%02d:%02d:%02d", &h, &m, &s);
      t = hhmmss_to_i(h, m, s);
      V.push_back(make_pair(t, false));
    }
    sort(V.begin(), V.end());
    int count = 0;
    int max = 0;
    for (unsigned int i=0; i<V.size(); i++) {
      if (V[i].second) {
	count++;
	if (max < count) max = count;
      } else {
	count--;
      }
    }
    printf("%d\n", max);
  }
}