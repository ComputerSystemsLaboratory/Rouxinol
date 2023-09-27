#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int c[21];
    int t[50001];
    int ini = (1 << 29);
    for (int i = 1; i <= m; i++) {
        cin >> c[i];
    }
    t[0] = 0;
    for (int i = 1; i <= 50000; i++) {
        t[i] = ini;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j + c[i] <= n; j++) {
            t[j + c[i]] = min(t[j] + 1, t[j + c[i]]);
        }
    }
    cout << t[n] << endl;
    return 0;
}