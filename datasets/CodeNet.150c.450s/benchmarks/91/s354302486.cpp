#include<cstdio>
#include<vector>
using namespace std;

int n, sum[1000001], isP[1000001];
vector<int> p;

int main() {
  for (int i = 2; i * i <= 1000000; i++) {
    bool ok = true;
    for (int j = 0; j < p.size(); j++) if (i % p[j] == 0) {
      ok = false;
      break;
    }
    if (ok) p.push_back(i);
  }
  for (int i = 2; i <= 1000000; i++) isP[i] = 1;
  for (int i = 0; i < p.size(); i++) {
    int k = 2;
    while (p[i] * k <= 1000000) isP[p[i] * k] = 0, k++;
  }
  for (int i = 1; i <= 1000000; i++) sum[i] = sum[i-1] + isP[i];
  while (scanf("%d", &n), n) {
    printf("%d\n", sum[n]);
    n = 0;
  }
}

