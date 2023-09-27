#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int n;
vector<vector<int>> a(100,vector<int>(100, -1));
vector<int> t, d(100, -1);

void prim(int start) {
    t.push_back(start);
    d[start] = 0;
    while (t.size() < n) {
        int min_v = 2001, min_i;
        rep(i, t.size()) {
            rep(j, n) {
                if (a[t[i]][j] != -1 && d[j] == -1 && a[t[i]][j] < min_v) {
                    min_v = a[t[i]][j];
                    min_i = j;
                }
            }
        }
        t.push_back(min_i);
        d[min_i] = min_v;
    }
    
}

int main() {
    scanf("%d", &n);
    rep(i, n) {
        rep(j, n) {
            scanf("%d", &a[i][j]);
        }
    }
    prim(0);
    int sum = 0;
    rep(i, n) {
        sum += d[i];
    }
    printf("%d\n", sum);
}
