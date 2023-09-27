#include <cstdio>
#include <vector>

using namespace std;

static int f(const vector<int>& ws, int P, int k) {
  int v = 0;
  int c = 0;
  int ntrack = 0;
  for (size_t i = 0; i < ws.size(); ++i) {
    if (c > 0 && P > 0 && c + ws[i] > P) {
      c = 0;
      ntrack++;
    }
    if (ntrack == k) {
      break;
    }

    if (c + ws[i] <= P) {
      c += ws[i];
      v++;
    }
  }
  return v;
}

int main() {
  int n, k;

  scanf("%d %d", &n, &k);

  vector<int> ws(n);
  int max = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &ws[i]);
    max += ws[i];
  }

  int min = 1;
  int P = (min + max) / 2;
  while (min <= max) {
    const int v = f(ws, P, k);
    if (v >= n) {
      max = P - 1;
    } else { // v < n
      min = P + 1;
    }
    P = (min + max) / 2;
  }

  printf("%d\n", P+1);
  return 0;
}