#include <bits/stdc++.h>
using namespace std;

#define rep(i,j) for(int (i)=0;(i)<(int)(j);++(i))

int ball[10];

bool dfs(int n, int a, int b) {
    if (n == 10) return true;
    if (ball[n] > a && dfs(n+1, ball[n], b)) return true;
    if (ball[n] > b && dfs(n+1, a, ball[n])) return true;
    return false;
}

int main() {
    int n; cin >> n;
    while (n--) {
        rep(i, 10) cin >> ball[i];
        if (dfs(0, 0, 0)) puts("YES");
        else puts("NO");
    }
}