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

int main() {
    while(true) {
        int H;
        cin >> H;
        if(H == 0) break;

        vector< vector<int> > block(H + 2, vector<int>(7, -1));
        REP(i, H) {
            REP(j, 5) cin >> block[i+1][j+1];
        }

        bool update = true;
        int ans = 0;
        while(update) {
            update = false;
            FOR(i, 1, H) {
                int prev = -1, cont = 0;
                FOR(j, 1, 6) {
                    if(block[i][j] == prev && block[i][j] > 0) cont++;
                    else {
                        if(cont >= 3) {
                            ans += cont * prev;
                            REP(k, cont) {
                                block[i][j-1-k] = 0;
                            }
                            update = true;
                        }
                        prev = block[i][j];
                        cont = 1;
                    }
                }
            }

            // 0の部分を詰める
            bool has_zero = false;
            if(update) has_zero = true;
            REP(cnt, H) {
                has_zero = false;
                FORR(i, H, 1) {
                    FOR(j, 1, 5) {
                        if(block[i][j] == 0) {
                            block[i][j] = block[i-1][j];
                            block[i-1][j] = 0;
                        }
                    }
                }
            }
            // cerr << "-------------------------------" << endl;
            // FOR(i, 1, H) {
            //     FOR(j, 1, 5) cerr << block[i][j];
            //     cerr << endl;
            // }
            // cerr << "-------------------------------" << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
