#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
template<class T> using vc = vector<T>;
template<class T> using vvc = vector<vector<T>>;

const ll MOD = 1e9 + 7;
// const ll MOD = 998244353;
const ll INF = 1e16;
const ld EPS = 1e-11;
const ld PI = acos(-1.0L);
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define repr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define repe(i, l, r) for (ll i = (l); i < (r); i++)
#define reper(i, l, r) for (ll i = (r)-1; i >= (l); i--)

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

void init() {cin.tie(0);ios::sync_with_stdio(false);cout << fixed << setprecision(15);}
//--------------------------------------------------------------------------------//
struct dice{
    int u, d, f, b, l, r;
    void init(int up,int down,int front, int back, int left, int right){
        u = up, d = down, f = front, b = back, l = left, r = right;
    }
    void goup(){    int tmp = u; u = b, b = d, d = f, f = tmp; }
    void godown(){  int tmp = u; u = f, f = d, d = b, b = tmp; }
    void goleft(){  int tmp = u; u = r, r = d, d = l, l = tmp; }
    void goright(){ int tmp = u; u = l, l = d, d = r, r = tmp; }

    void rotateleft() {  int tmp = f; f = r, r = b, b = l, l = tmp; }
    void rotateright() { int tmp = f; f = l, l = b, b = r, r = tmp; }

    void reversefb() { swap(f, b), swap(u, d); }
    void reverselr() { swap(l, r), swap(u, d); }
};
int main() {
    init();
    int u, b, r, l, f, d;
    cin >> u >> b >> r >> l >> f >> d;
    dice dic;
    dic.init(u, d, f, b, l, r);

    dice dd[6];
    dd[0] = dic;
    dic.reversefb(),    dd[1] = dic;
    dic.goleft(),       dd[2] = dic;
    dic.reversefb(),    dd[3] = dic;
    dic.goup(),         dd[4] = dic;
    dic.reversefb(),    dd[5] = dic;


    ll N;
    cin>>N;
    rep(i,N){
        cin >> u >> b;
        rep(j,6){
            if (dd[j].u != u) continue;

            rep(k,4){
                if(dd[j].b==b){
                    cout << dd[j].r << endl;
                }
                dd[j].rotateleft();
            }
        }
    }
}
