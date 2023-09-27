#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstring>

typedef long long ll;

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int x[n][m], y[m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        cin >> y[i];
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res += x[i][j] * y[j];
        }
        cout << res << endl;
        res = 0;
    }
}

int main() {
    solve();
    return 0;
}