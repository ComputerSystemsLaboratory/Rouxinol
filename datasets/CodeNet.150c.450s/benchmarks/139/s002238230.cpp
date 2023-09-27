/////////////////////////////////////////////////
/////             Give me AC!!!!            /////
/////////////////////////////////////////////////
//↑これじゃ気合いが足りない！
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////             お願いしますACをくださいそうじゃないと僕泣きますお願いしますACをくださいJudge様....            /////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,N) for(int i = 0; i < (N); i++)
#define erep(i,N) for(int i = N - 1; i >= 0; i--)
const int MOD = 1000000007;
const int MAX = 510000;
const ld PI = (acos(-1));
using Graph = vector<vector<int>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true;} return false;}
typedef pair<int, int> P;
typedef pair<ll,ll> PLL;
ld rad(ld a) {return a * 180 / PI;}
const int dx[4] = {1, 0, -1, 0};//2次元グリッド上のx軸方向
const int dy[4] = {0, 1, 0, -1};//2次元グリッド上のy軸方向

/*template<int MOD> struct Fp {
    ll val;
    constexpr Fp(ll v = 0) noexcept : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    constexpr int getmod() { return MOD; }
    constexpr Fp operator - () const noexcept {
        return val ? MOD - val : 0;
    }
    constexpr Fp operator + (const Fp& r) const noexcept { return Fp(*this) += r; }
    constexpr Fp operator - (const Fp& r) const noexcept { return Fp(*this) -= r; }
    constexpr Fp operator * (const Fp& r) const noexcept { return Fp(*this) *= r; }
    constexpr Fp operator / (const Fp& r) const noexcept { return Fp(*this) /= r; }
    constexpr Fp& operator += (const Fp& r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr Fp& operator -= (const Fp& r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr Fp& operator *= (const Fp& r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }
    constexpr Fp& operator /= (const Fp& r) noexcept {
        ll a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            ll t = a / b;
            a -= t * b; swap(a, b);
            u -= t * v; swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr bool operator == (const Fp& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator != (const Fp& r) const noexcept {
        return this->val != r.val;
    }
    friend constexpr ostream& operator << (ostream &os, const Fp<MOD>& x) noexcept {
        return os << x.val;
    }
    friend constexpr Fp<MOD> modpow(const Fp<MOD> &a, ll n) noexcept {
        if (n == 0) return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }
};
using mint = Fp<MOD>;*/
struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) { }

    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool same(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};

vector<pair<ll, ll>> prime_factorize(ll N) {
    vector<pair<ll, ll>> res;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

//dpTable
vector<ll> dp(1000000,100000000000);

ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

ll mod(ll val, ll m) {
  ll res = val % m;
  if (res < 0) res += m;
  return res;
}

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(){
    int N,M;
    cin >> N >> M;
    Graph G(N);
    vector<int> seen(N,-1);
    for(int i = 0;i < M;i++) {
        int A,B;
        cin >> A >> B;
        A--;
        B--;
        G.at(A).push_back(B);
        G.at(B).push_back(A);
    }
    queue<int> que;
    que.push(0);
    while(!que.empty()) {
        int now_place = que.front();
        que.pop();
        for (int i = 0; i < G.at(now_place).size(); i++) {
            if (seen.at(G.at(now_place).at(i)) == -1) {
                seen.at(G.at(now_place).at(i)) = now_place;
                que.push(G.at(now_place).at(i));
            }
        }
    }
    bool ans = true;
    for (int i = 1; i < N; i++) {
        if (seen.at(i) == -1) {
            ans = false;
            break;
        }
    }
    if (ans) {
        cout << "Yes" << endl;
        for (int i = 1; i < N; i++) {
            cout << seen.at(i) + 1 << endl;
        }
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}