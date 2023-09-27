#include<iostream>
#define MAX_N 100
#define MAX_M 100
#define MAX_L 100

using namespace std;

int n, m, l;
long long a[MAX_N][MAX_M], b[MAX_M][MAX_L];
long long ans[MAX_N][MAX_L];

void solve() {
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < l; k++) {
            for(int j = 0; j < m; j++) {
                ans[i][k] += a[i][j] * b[j][k];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < l-1; j++) {
            cout << ans[i][j] << " ";
        }
        cout << ans[i][l-1] << endl;
    }
}

int main() {
    cin >> n >> m >> l;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for(int j = 0; j < m; j++) {
        for(int k = 0; k < l; k++) {
            cin >> b[j][k];
        }
    }
    solve();
}
