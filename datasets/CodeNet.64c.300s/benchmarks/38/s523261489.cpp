#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[10];


bool dfs(int i, int left, int right) {
    if (i == 9) return a[i] > left || a[i] > right;
    if (a[i] > left && dfs(i+1, a[i], right)) return true;
    if (a[i] > right && dfs(i+1, left, a[i])) return true;
    return false;
}

void solve() {
    if (dfs(0,0,0)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> a[j];
        }
        solve();
    }
}
