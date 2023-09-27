// 基本テンプレート
 
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
using namespace std;
 
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long int
 
template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}
 
typedef pair<int, int> pii;
typedef long long ll;
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
const ll INF = 1001001001001001LL;
const ll MOD = 1000000007LL;

// ミラーラビン素数判定法 (Miller-Rabin Primality Test)
// 普通に掛け算するとオーバーフローで死ぬため、バイナリ法で処理
template<typename T>
struct MLPT {
    MLPT() {}

    T mod_mul(T a, T b, T mod) {
        T res = 0; a %= mod;
        while(b) {
            if(b & 1) (res += a) %= mod;
            a = (a + a) % mod;
            b >>= 1;
        }
        return res;
    }

    T mod_pow(T x, T n, T mod) {
        x %= mod;
        if(n == 0) return 1;
        T res = mod_pow(mod_mul(x, x, mod), n / 2, mod);
        if(n & 1) res = mod_mul(res, x, mod);
        return res;
    }

    bool solve(T N) {
        if(N <  2) return false;
        if(N == 2) return true;
        int case_num = 10;
        
        srand( time(NULL) );
        while(case_num--) {
            // 適当な a \in [1, N-1] を用意してテスト。合成数であれば弾こう
            T a = (rand() % (N-1)) + 1;
            T d = N-1, s = 0;
            while(d % 2 == 0) d >>= 1, s++;

            if(mod_pow(a, d, N) == 1) continue;
            bool pbprime = false;
            for(int r=0; r<s; r++) {
                if(mod_pow(a, d*(1LL << r), N) == N-1) {
                    pbprime = true;
                    break;
                }
            }
            if(!pbprime) return false;
        }
        return true;
    }
};

// ロー法による素因数分解
// 対象となる数が素数の場合は常に failure -> Miller Rabin と併用しよう
template<typename T>
struct Rho {
    Rho () {}
    MLPT<T> ml;
    T func(T x, T c, T mod) {
        return (ml.mod_mul(x, x, mod) + c) % mod;
    }

    vector<int> pat = {2, 3, 5, 7, 11, 13};
    T check(T N) {
        // 小さい素因数はなんかやたら時間かかるので愚直に
        for(size_t i=0; i<pat.size(); i++) {
            if(N % pat[i] == 0) return pat[i];
        }

        srand( time(NULL) );
        T x = 0, c = 0;
        while(!x) x = rand() % N;
        while(!c) c = rand() % N;
        T y = x, d = 1;
        while(d == 1) {
            x = func(x, c, N);
            y = func(func(y, c, N), c, N);
            d = __gcd(abs(x-y), N);
        }
        return (d == N ? -1 : d);
    }

    // ソートされてないので、必要だったら別途ソートしてね
    vector<T> factor(T N) {
        if(N <= 1) return {};
        if(ml.solve(N)) return {N};

        T res = -1;
        while(res == -1) res = check(N);
        vector<T> va = factor(res);
        vector<T> vb = factor(N / res);
        if(va.size() < vb.size()) swap(va, vb);
        va.insert(va.end(), vb.begin(), vb.end());
        return va;
    }
};

signed main() {
    int N; scanf("%lld", &N);
    Rho<int> rho;
    vector<int> ans = rho.factor(N);
    sort(ans.begin(), ans.end());
    printf("%lld:", N);
    for(auto x : ans) printf(" %lld", x);
    printf("\n");
    return 0;
}
