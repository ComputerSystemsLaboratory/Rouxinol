#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,N) for(int i = 0; i < (N); i++)
#define erep(i,N) for(int i = N - 1; i >= 0; i--)
const ll INF = 1000000000;
//const ll MOD = 1000000007;
const ld PI = (acos(-1));
using Graph = vector<vector<int>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true;} return false;}
typedef pair<int, int> P;
typedef pair<ll,ll> PLL;
double rad(double a) {return a * 180 / PI;}

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号 (例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

//dpTable
int dp[100050];

int main(){
    int N;
    cin >> N;
    ll ans = 0;
    vector<int> A(N);
    rep (i,N) cin >> A.at(i);
    vector<int> cnt(100050,0);
    rep (i,N) {
        cnt.at(A.at(i))++;
        ans += A.at(i);
    }
    int Q;
    cin >> Q;
    vector<int> B(Q);
    vector<int> C(Q);
    rep (i,Q) {
        cin >> B.at(i) >> C.at(i);
        ans += (C.at(i) - B.at(i)) * cnt.at(B.at(i));
        cout << ans << endl;
        cnt.at(C.at(i)) += cnt.at(B.at(i));
        cnt.at(B.at(i)) = 0;
    }
    return 0;
}