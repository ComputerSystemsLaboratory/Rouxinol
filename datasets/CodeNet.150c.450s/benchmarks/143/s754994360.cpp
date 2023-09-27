#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <fstream>
#include <numeric>
using namespace std;
typedef long long int ll;

#define EPS (1e-7)
#define INF 1e18
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define PI (acos(-1))

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define rep(i, init, n) for(int i = init; i <(int)(n); i++)

int main() {
    ll N, Q;
    ll ans = 0;
    cin >> N;
    ll a, b, c;
    map<ll, ll> m;
    REP(i, N){
        cin >> a;
        m[a]++;
        ans += a;
    }
    cin >> Q;
    vector<ll> h;
    REP(i, Q){
        cin >> b >> c;
        ans += (c - b) * m[b];
        h.push_back(ans);
        m[c] += m[b];
        m[b] = 0;
    }
    REP(i, Q) cout << h[i] << endl;

    return 0;
}