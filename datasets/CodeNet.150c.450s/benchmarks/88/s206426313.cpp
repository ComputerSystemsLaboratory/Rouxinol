#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

typedef pair<int,int> pii;

int square(int x) {
  return x*x;
}

bool cmp(const pii &a, const pii &b) {
  const int sqa = square(a.first)+square(a.second);
  const int sqb = square(b.first)+square(b.second);
  if (sqa != sqb) return (sqa < sqb);
  return (a.first < b.first);
}

int main() {
  vector<pii> memo;
  for (int i=0;i<150;i++) {
    for (int j=0;j<i;j++) {
      memo.push_back(pii(j+1, i+1));
    }
  }
  sort(memo.begin(), memo.end(), cmp);
  while (true) {
    int h, w;
    scanf("%d %d", &h, &w);
    if (h == 0 && w == 0) break;
    vector<pii>::iterator p = find(memo.begin(), memo.end(), pii(h, w))+1;
    printf("%d %d\n", p->first, p->second);
  }
  return 0;
}