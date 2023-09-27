#include "bits/stdc++.h"
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define pii pair<int, int>
using namespace std;
int main()
{
    map<int, vector<pii>> diag;
    for (int i = 1; i < 150; ++i) {
        for (int j = i + 1; j < 150; ++j) {
            int d = i * i + j * j;
            if (diag.count(d))
                diag[d].pb(mp(i, j));
            else
                diag[d] = vector<pii>{mp(i, j)};
        }
    }
    int w, h;
    while (cin >> h >> w, h && w) {
        int d = h * h + w * w;
        pair<int, int> *res = NULL;
        if (diag.count(d)) {
            for (auto p : diag[d]) {
                if (p.first > h) {
                    res = &p;
                    break;
                }
            }
        }
        if (!res) {
            while (++d) {
                if (diag.count(d)) {
                    res = &(diag[d].front());
                    break;
                }
            }
        }
        
        cout << res->first << " " << res->second << endl;
    }
    return EXIT_SUCCESS;
}