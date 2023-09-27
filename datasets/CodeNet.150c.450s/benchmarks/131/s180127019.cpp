#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <map>
using namespace std;

int next(int L, int a) {
  char format[256], str1[256], str2[256];
  sprintf(format, "%%0%dd", L);
  sprintf(str1, format, a);
  strcpy(str2, str1);
  sort(str1, str1 + L);
  sort(str2, str2 + L, greater<int>());
  return atoi(str2) - atoi(str1);
}

int main() {
  int a, L;
  while (scanf("%d%d", &a, &L), a|L) {
    map<int, int> S;
    for (int i = 0; ; ++i) {
      if (S.count(a)) {
        printf("%d %d %d\n", S[a], a, i - S[a]);
        break;
      } else {
        S.insert(make_pair(a, i));
        a = next(L, a);
      }
    }
  }
}