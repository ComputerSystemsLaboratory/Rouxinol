#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int N, M;
string U[257];

int main() {
  char s[14];
  scanf("%d", &N);
  for (int i=0;i<N;i++) {
    scanf("%s", s);
    U[i] = s;
  }
  scanf("%d", &M);
  bool opened = false;
  for (int i=0;i<M;i++) {
    scanf("%s", s);
    const string* p = find(U, U+N, (string)s);
    if (p && !p->empty()) {
      opened = !opened;
      printf("%s by %s\n", (opened ? "Opened" : "Closed"), s);
    } else {
      printf("Unknown %s\n", s);
    }
  }
  return 0;
}