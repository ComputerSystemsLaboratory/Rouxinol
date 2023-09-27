#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<cmath>
#include<iomanip>
#include<set>
#include<numeric>
#include<sstream>
#include<random>
#include<cassert>
#include<climits>
#include<cstring>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
const int inf = 1e9 + 7;
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dx[] = {1, -1, 0, 0, -1, 1, 1, -1};
#define ceil(a, b) a / b + !!(a % b)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

const int lim = 300;
const int lim_ = 1000001;
int tri[lim];
int tetra[lim];
int n;
int table[lim_];
int odd[lim_];
int main() {
    tri[1] = 1;
    rrep(i, 2, lim) {
        tri[i] = tri[i - 1];
        tri[i] += i;
    }
    //cout << tri[lim - 1] << endl;
    tetra[1] = 1;
    rrep(i, 2, lim) {
        tetra[i] = tetra[i - 1];
        tetra[i] += tri[i];
    }
    //rep(i, 5) cout << tetra[i] << " "; cout << endl;
    //cout << tetra[lim - 1] << endl;
    rep(i, lim_) table[i] = odd[i] = inf;
    table[0] = odd[0] = 0;
    rep(i, lim) {
        rep(j, lim_) {
            if (table[j] != inf && j + tetra[i] < lim_) {
                chmin(table[j + tetra[i]], table[j] + 1);
            }
        }
        if (tetra[i] % 2 == 0) continue;
        rep(j, lim_) {
            if (odd[j] != inf && j + tetra[i] < lim_) {
                chmin(odd[j + tetra[i]], odd[j] + 1);
            }
        }
    }
    
    while (cin >> n && n) {
        cout << table[n] << " " << odd[n] << endl;
    }
    
}

