

#include <iostream>
#include <math.h>
#include <algorithm>
#include <functional> 
#include <string>
#include <vector>

#include <cstring>
#include <set>
#include <map>
#include <queue>
#include <utility>

using namespace std;

typedef long long LL;

#define dump(c) { for (auto it = c.begin(); it != c.end(); ++it) if (it == c.begin()) cout << *it; else cout << ' ' << *it; cout << endl; } 
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

    int D;
    cin >> D;
    vector<int> c(26), cc(26);
    rep(i, 26) {
        cin >> c[i];
        cc[i] = c[i];
    }
    vector<vector<int>> s(D);
    rep(i, D) {
        s[i].resize(26);
        rep(j, 26) cin >> s[i][j];
    }

    vector<int> t(D);
    rep(i, D) {
        cin >> t[i];
        --t[i];
    }
    vector<int> lst(26);

    int v = 0;
    rep(d, D) {
        v += s[d][t[d]];
        lst[t[d]] = d+1;
        rep(i, 26) {
            v -= ((d+1)-lst[i]) * c[i];
        }
        cout << v << endl;

        // int x = -1;
        // int best = -1000000;
        // rep(i, 26) {
        //     int tmp = s[d][i] - cc[i];
        //     if (best < tmp) {
        //         x = i;
        //         best = tmp;
        //     }
        // }
        // cout << (x+1) << endl;
        // rep(i, 26) {
        //     if (i == x) {
        //         cc[i] = c[i];
        //     } else {
        //         cc[i] += c[i];
        //     }
        // }
    }

    return 0;
}


