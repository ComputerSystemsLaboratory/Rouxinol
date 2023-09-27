#include <iostream>
#include <algorithm>
using namespace std;

static const int MAX_N = 50000;
static const int MAX_M = 20;
static const int INF = (1 << 30);

int main(void) {
    int n, m;
    int C[MAX_M+1];
    int T[MAX_N+1];

    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> C[i];
    }
    T[0] = 0;
    for (int i = 1; i <= n; i++) {
        T[i] = INF;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = C[i]; j <= n; j++) {
            T[j] = min(T[j], T[j - C[i]] + 1);
        }
    }

    cout << T[n] << endl;

    return 0;
}