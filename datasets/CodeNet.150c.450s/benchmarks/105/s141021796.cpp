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
#include <functional>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

template<typename T> void chmin(T &a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T &a, T b) { if (a < b) a = b; }

int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }

bool gauss_elimination(VVI A, VI B){
    int n = A.size(), m = A[0].size();

    int r = 0;
    REP(j,m){
        FOR(i,r,n-1){
            if (A[i][j]){
                swap(A[r], A[i]);
                swap(B[r], B[i]);
                break;
            }
        }
        if (A[r][j] == 0) continue;
        FOR(i,r+1,n-1){
            if (A[i][j] == 0) continue;
            FOR(jj,j,m-1){
                A[i][jj] ^= A[r][jj];
            }
            B[i] ^= B[r];
        }
        r++;
        if (r == n) break;
    }
    int p = 0;
    REP(j,B.size()) if (B[j]) p = j + 1;
    return r >= p;
}

int solve(){
    int n, m = 64;
    cin >> n;
    VL a(n);
    REP(i,n) cin >> a[i];
    string s;
    cin >> s;
    VVI A(m);
    FORR(i,n-1,0){
        if (s[i] == '0'){
            ll x = a[i];
            REP(j,m){
                A[j].push_back(x % 2);
                x /= 2;
            }
        }else{
            if (A[0].empty()) return 1;
            VI b(m);
            ll x = a[i];
            REP(j,m){
                b[j] = x % 2;
                x /= 2;
            }
            if (!gauss_elimination(A, b)) return 1;
        }
    }
    return 0;
}

int main(void){
    int t;
    cin >> t;
    while (t--){
        cout << solve() << endl;
    }
    return 0;
}
