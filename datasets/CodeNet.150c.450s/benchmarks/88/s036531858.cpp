#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Pair;

vector<Pair> rects;

bool Compare(const Pair &a, const Pair &b) {
  int h1 = a.first;
  int h2 = b.first;
  int w1 = a.second;
  int w2 = b.second;
  int t1 = h1*h1+w1*w1;
  int t2 = h2*h2+w2*w2;
  if (t1 != t2) return t1 < t2;
  return h1 < h2;
}

int main() {
  for (int i=1; i<200; i++) {
    for (int j=i+1; j<200; j++) {
      rects.push_back(Pair(i, j));
    }
  }
  sort(rects.begin(), rects.end(), Compare);

  while (1) {
    int h, w;
    scanf("%d%d", &h, &w);
    if (h == 0 && w == 0) return 0;

    Pair ans = *upper_bound(rects.begin(), rects.end(), Pair(h, w), Compare);
    printf("%d %d\n", ans.first, ans.second);
  }
}