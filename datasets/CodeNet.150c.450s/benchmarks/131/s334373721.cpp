#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool ls(const char &a, const char &b) { return a < b; }
bool gr(const char &a, const char &b) { return a > b; }

int main() {
  vector<int> a;
  while (true) {
    int a0, L;
    scanf("%d %d", &a0, &L);
    if (a0 == 0 && L == 0) break;
    char fmt[10];
    sprintf(fmt, "%%0%dd", L);
    a.clear();
    a.push_back(a0);
    for (int i=0;i<=21;i++) {
      char ai[10];
      sprintf(ai, fmt, a[i]);
      sort(ai, ai+L, ls);
      const int amin = atoi(ai);
      sort(ai, ai+L, gr);
      const int amax = atoi(ai);
      const int nexta = amax-amin;
      vector<int>::iterator p = find(a.begin(), a.end(), nexta);
      if (p != a.end()) {
        int j = p-a.begin();
        printf("%d %d %d\n", j, nexta, i-j+1);
        break;
      }
      a.push_back(nexta);
    }
  }
  return 0;
}