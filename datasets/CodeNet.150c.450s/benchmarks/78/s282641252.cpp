#include <bits/stdc++.h>
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, a) range(i, 0, a)
using namespace std;

int f(int n) {
    return n * (n + 1) * (n + 2) / 6;
}

const int INF = 1e9;

int main() {
    vector <int> all, odd;
    for (int i = 0; f(i) < 1e6; i++) {
        int fi = f(i);
        all.push_back(fi);
        if (fi % 2) odd.push_back(fi);
    }

    vector <int> allDp(1e6, INF);
    allDp[0] = 0;
    for (int i = 0; i < 1e6; i++) {
        for (auto & j : all) {
            if (i + j >= 1e6) continue;
            allDp[i + j] = min(allDp[i + j], allDp[i] + 1);
        }
    }

    vector <int> oddDp(1e6, INF);
    oddDp[0] = 0;
    for (int i = 0; i < 1e6; i++) {
        for (auto & j : odd) {
            if (i + j >= 1e6) continue;
            oddDp[i + j] = min(oddDp[i + j], oddDp[i] + 1);
        }
    }


    int n;
    while (cin >> n, n) {
        cout << allDp[n] << " " << oddDp[n] << endl;
    }
    return 0;
}
