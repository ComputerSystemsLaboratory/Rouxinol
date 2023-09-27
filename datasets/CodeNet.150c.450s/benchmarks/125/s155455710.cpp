#include <iostream>
using namespace std;
typedef long long ll;
#define int ll

int g[105][105], d[105], f[105];
int presenttime = 1, n;
bool is_search[105];

void dfs(int p) {
  d[p] = presenttime++;
  is_search[p] = true; // ??????????????§?????§??????

  for (int i = 0; i < n; i++) {
    if(is_search[i] == false && g[p][i] && p != i) dfs(i);
  }
  if (f[p] == 0) f[p] = presenttime++;
}

signed main(void) {
  int u, k, v;

  fill(is_search, is_search + n, false);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    for (int i = 0; i < k; i++) {
      cin >> v;
      g[u-1][v-1] = 1;
    }
   }

  int s = 0, i;

   while(1) {
    dfs(s);

    for (i = 0; i < n; i++) {
      if (is_search[i] == false) {
        s = i;
        break;
      }
    }
    if(i == n) break;
   }

   for (i = 0; i < n; i++) {
     cout << i+1 << " " << d[i] << " " << f[i] << endl;
   }
   return 0;
}