#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

#define MAXN 100
int n, timecount = 1;
int ans[MAXN][MAXN];
int d[MAXN], f[MAXN]; // d[i]はdを最初に発見した時刻,f[i]は調べ終わった時刻
bool is_reach[MAXN];

int dfs(int p);

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        d[i] = -1;
        f[i] = -1;
        is_reach[i] = false;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ans[i][j] = 0;
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int tmp;
            cin >> tmp;
            ans[u-1][tmp-1] = 1;
        }
    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (j == n-1) cout << ans[i][j];
//            else cout << ans[i][j] << " ";
//        }
//        cout << endl;
//    }
    int start = 0;
    while (1) {
        dfs(start);
        int i;
//        printf("%d search end\n", start);
        for (i = 0; i < n; i++) {
            if (f[i] == -1) {
                start = i;
                break;
            }
        }
        if (i == n) break;
//        printf("next: %d\n", start);
    }
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", i+1, d[i], f[i]);
    }
    return 0;
}

int dfs(int p)
{
    int ret = 0, count = 1;
    is_reach[p] = true;
    if (d[p] == -1) d[p] = timecount++;
    for (int i = 0; i < n; i++) {
        if (ans[p][i] == 1 && is_reach[i] == false && p != i) {
            dfs(i);
        }
    }
    if (f[p] == -1) f[p] = timecount;
    timecount++;
    return 0;
}