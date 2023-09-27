#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<long double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

template<typename T> void chmin(T &a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T &a, T b) { if (a < b) a = b; }

int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }
#define INF 1LL<<60

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
    if (!item.empty()) {
            elems.push_back(item);
        }
    }
    return elems;
}

int main() {
    while(true) {
        int N;
        cin >> N;
        if(N == 0) break;

        vector<int> acum(24 * 3600 + 5);
        vector<int> simul(24 * 3600 + 5);
        REP(i, N) {
            string s, t;
            cin >> s >> t;
            vector<string> s_split = split(s, ':');
            vector<string> t_split = split(t, ':');
            int s_int = stoi(s_split[0]) * 60 * 60 + stoi(s_split[1]) * 60 + stoi(s_split[2]);
            int t_int = stoi(t_split[0]) * 60 * 60 + stoi(t_split[1]) * 60 + stoi(t_split[2]);
            // if(s_int == t_int) cerr << s << " " << t << endl;
            acum[s_int]++;
            acum[t_int]--;
            // if(s_int == t_int) simul[s_int]++;
        }
        FOR(i, 1, 24 * 3600)
            acum[i] += acum[i-1];

        int ans = 0;
        FOR(i, 0, 24 * 3600)
            ans = max(ans, acum[i]);
        cout << ans << endl;
    }
    return 0;
}
