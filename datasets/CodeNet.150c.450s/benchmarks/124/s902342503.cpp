#define _USE_MATH_DEFINES
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <clocale>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define FOR(i, s, n) for(int i = (s), i##_len=(n); i < i##_len; ++i)
#define FORS(i, s, n) for(int i = (s), i##_len=(n); i <= i##_len; ++i)
#define VFOR(i, s, n) for(int i = (s); i < (n); ++i)
#define VFORS(i, s, n) for(int i = (s); i <= (n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define REPS(i, n) FORS(i, 0, n)
#define VREP(i, n) VFOR(i, 0, n)
#define VREPS(i, n) VFORS(i, 0, n)
#define RFOR(i, s, n) for(int i = (s), i##_len=(n); i >= i##_len; --i)
#define RFORS(i, s, n) for(int i = (s), i##_len=(n); i > i##_len; --i)
#define RREP(i, n) RFOR(i, n, 0)
#define RREPS(i, n) RFORS(i, n, 0)
#define ALL(v) (v).begin(), (v).end()
#define SORT(v) sort(ALL(v))
#define RSORT(v) sort(ALL(v), greater<decltype(v[0])>())
#define SZ(x) ((int)(x).size())
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define BIT(n) (1LL<<(n))
#define UNIQUE(v) v.erase(unique(ALL(v)), v.end())

using ll = long long;
using Pi_i = pair<int, int>;
using VB = vector<bool>;
using VC = vector<char>;
using VD = vector<double>;
using VI = vector<int>;
using VLL = vector<ll>;
using VS = vector<string>;
using VSH = vector<short>;

const int MOD = 1000000007;
const int INF = 1000000000;
const int NIL = -1;

template<class T, class S>
bool chmax(T &a, const S &b){
    if(a < b){
        a = b; return true;
    }
    return false;
}
template<class T, class S>
bool chmin(T &a, const S &b){
    if(b < a){
        a = b; return true;
    }
    return false;
}


int V; // 頂点数
vector<vector<int>> d; //d[i][j] iからjまでのコスト 最初辺がなければINF 同じ点では0

void warshallFloyd(){
    REP(k, V) REP(i, V) REP(j, V)
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main(){
    cin >> V;
    d.resize(V, VI(V, INF));
    REP(i, V){
        d[i][i] = 0;
        int u, k; cin >> u >> k;
        REP(j, k){
            int v, c; cin >> v >> c;
            d[u][v] = c;
        }
    }
    warshallFloyd();
    REP(i, V){
        cout << i << " " << d[0][i] << "\n";
    }
    return 0;
}

