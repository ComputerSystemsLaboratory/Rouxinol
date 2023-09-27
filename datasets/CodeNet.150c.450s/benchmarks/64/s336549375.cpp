#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int n, m;
int A[2000];

// i 番目以降の要素を用いて数値mを作ることができるかどうか (True/False)
bool solve(int i, int m) {

    if (i == n && m == A[i]) {
        return true;
    } else if (i == n) {
        return false;
    }
    
    if (solve(i + 1, m) || solve(i + 1, m - A[i])) return true;
    else return false;
}

int main(void) {
    int w;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> w;
        string ans = solve(0, w) ? "yes":"no";
        cout << ans << endl;
    }
    return 0;
}
