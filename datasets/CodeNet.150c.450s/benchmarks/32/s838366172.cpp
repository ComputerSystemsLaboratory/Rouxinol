#include <bits/stdc++.h>
#define rep(i,j) for (int (i)=0;(i)<(int)(j);++(i))
#define put(i) cout << (i) << endl
using namespace std;
typedef long long ll;

int main() {
    int m, nmin, nmax;
    while (cin >> m >> nmin >> nmax, (m||nmin||nmax)) {
        vector<int> p(m);
        rep(i,m) cin >> p[i];
        sort(p.begin(), p.end(), [](const int & a, const int & b) {return a > b;});
        int ans = -1, v = -1;
        for (int i = nmin-1; i < nmax; ++i) {
            int gap = p[i]-p[i+1];
            if (gap >= v) {
                v = gap;
                ans = i+1;
            }
        }
        put(ans);
    }
}