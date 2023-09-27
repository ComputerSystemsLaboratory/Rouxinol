#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int m, nmin, nmax;
    cin >> m >> nmin >> nmax;
    if(m == 0) return false;

    vector<int> P(m);
    for(int i = 0; i < m; ++i) {
        cin >> P[i];
    }

    int res = nmin, gap = P[nmin-1] - P[nmin];
    for(int i = nmin; i <= nmax; ++i) {
        int tmp = P[i - 1] - P[i];
        if(gap <= tmp) res = i, gap = tmp;
    }

    cout << res << endl;
    return true;
}

int main() {
    while(solve());
    return 0;
}
