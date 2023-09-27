#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vc = vector<char>;
using vvc = vector<vc>;
template<class T> using hset = unordered_set<T>;
template<class Key, class T> using hmap = unordered_map<Key, T>;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main() {
    int m, nmin, nmax, submax, ans;
    vi P;
    while (cin >> m >> nmin >> nmax) {
        if (m == 0) break;

        submax = 0;
        ans = nmin;
        P.resize(m);
        for (int i = 0; i < m; i++) cin >> P[i];

        for (int n = nmin; n <= nmax; n++) {
            if (P[n-1] - P[n] >= submax) {
                submax = P[n-1] - P[n];
                ans = n;
            }
        }

        cout << ans << endl;
    }

    return 0;
}