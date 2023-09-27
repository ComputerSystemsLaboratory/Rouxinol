#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int INF = 1000000000;

int main() {
    int n;
    scanf("%d", &n);
    // vector<int> a = {4,1,6,2,8,5,7,3};
    // n = a.size();
    vector<int> a(n);
    rep(i, n) {
        scanf("%d", &a[i]);
    }
    int len = 1;
    vector<int> l(n+1, INF);
    rep(i, n) {
        if (i == 0) {
            l[len] = a[i];
            continue;
        }
        if (a[i] > l[len]) {
            len++;
            l[len] = a[i];
        } else {
            int ng = 0, ok = len;
            while (ng + 1 < ok) {
                int mid = (ok + ng) / 2;
                if (a[i] <= l[mid]) {
                    ok = mid;
                } else {
                    ng = mid;
                }
            }
            l[ok] = a[i];
        }
        // for (int j = 1; j <= len; j++) {
        //     printf("%d ", l[j]);
        // }
        // printf("\n");
    }    
    printf("%d\n", len);
}
