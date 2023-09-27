#include <iostream>
#define MAX_N 100
#define MAX_M 100

using namespace std;

int n, m, a[MAX_N][MAX_M], b[MAX_M];

void solve() {
    for(int i = 0; i < n; i++) {
        int ans = 0;
        for(int j = 0; j < m; j++) {
            ans += a[i][j] * b[j];
        }
        cout << ans << endl;
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++) cin >> b[i];
    solve();
}
