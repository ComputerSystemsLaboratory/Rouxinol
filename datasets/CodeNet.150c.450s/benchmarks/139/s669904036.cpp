#include <algorithm>
#include <iostream>
#include <cstdio>
#include <map>
#include <numeric>
#include <cmath>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <string.h>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <iomanip>
#include <sys/time.h>
#include <tuple>
#include <random>
using namespace std;

#define endl '\n'
#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define UNIQ(v) (v).erase(unique((v).begin(), (v).end()), (v).end())

typedef long long ll;
typedef long double ld;
typedef pair<ll, int> P;
typedef tuple<int, int, int> T;
typedef vector< vector<ld> > matrix;
struct pairhash {
public:
    template<typename T, typename U>
    size_t operator()(const pair<T, U> &x) const {
	size_t seed = hash<T>()(x.first);
	return hash<U>()(x.second) + 0x9e3779b9 + (seed<<6) + (seed>>2);
    }
};
const int inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const double eps = 1e-8;
const double pi = acos(-1);

int n, m;
int a[200100], b[200100];

vector<int> G[100100];

void solve() {
    for (int i = 0; i < m; i++) {
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }

    int res[n];
    memset(res, -1, sizeof(res));
    queue<int> que;
    que.push(0);
    res[0] = 0;
    while (!que.empty()) {
        int v = que.front(); que.pop();
        for (int u : G[v]) {
            if (res[u] < 0) {
                res[u] = v+1;
                que.push(u);
            }
        }
    }

    cout << "Yes" << endl;
    for (int i = 1; i < n; i++) {
        cout << res[i] << endl;
    }
}

void input() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(15);

    input();
    solve();
}
