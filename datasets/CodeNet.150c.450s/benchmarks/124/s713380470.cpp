#include <bits/stdc++.h>
#include <cmath>

using namespace std;
typedef long long ll;
//typedef unsigned long long ll;

#define rep(i, n) for (int i = 0; i < (n); ++i)
//#define rep(i, n) for (ll i = 0; i < (n); ++i)
//#define sz(x) ll(x.size())
//typedef pair<ll, int> P;
//typedef pair<ll, ll> P;
//const double INF = 1e10;
const ll INF = LONG_LONG_MAX / 10;
//const ll INF = 1e15;
const ll MINF = LONG_LONG_MIN;
//const int INF = INT_MAX / 10;
#define cmin(x, y) x = min(x, y)
#define cmax(x, y) x = max(x, y)

bool contain(set<int> &s, int a) { return s.find(a) != s.end(); }

//ifstream myfile("C:\\Users\\riku\\Downloads\\0_00.txt");
//ofstream outfile("log.txt");
//outfile << setw(6) << setfill('0') << prefecture << setw(6) << setfill('0') << rank << endl;
// std::cout << std::bitset<8>(9);

typedef pair<double, double> P;

void print_line(vector<int> &line) {
    if (line.size() == 0ll) {
        cout << endl;
        return;
    }
    for (ll i = 0; i < line.size(); i++) {
        cout << line[i];
        if (i == line.size() - 1) cout << endl;
        else cout << ' ';
    }
}


typedef priority_queue<long long, vector<long long>, greater<long long>> PQ_ASK;
const int mod = 1000000007;

void warshall_floyd(int n, vector<vector<ll>> &d) {
    for (int k = 0; k < n; k++) {       // 経由する頂点
        for (int i = 0; i < n; i++) {    // 始点
            for (int j = 0; j < n; j++) {  // 終点
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<ll>> distances(n, vector<ll>(n, INF));
    rep(i, n) distances[i][i] = 0;
    rep(i, n) {
        int j, k;
        cin >> j >> k;

        rep(l, k) {
            int u, c;
            cin >> u >> c;
            distances[j][u] = c;
        }
    }

    warshall_floyd(n, distances);

    rep(i, n) cout << i << ' ' << distances[0][i] << endl;

}


