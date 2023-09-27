#include <bits/stdc++.h>
using namespace std;
//=====================================================
// マクロ定義部
//=====================================================
#define FOR(i,a,b) for(ll i = (a); i < (b); ++i)
#define FOR_EQ(i,a,b) for(ll i = (a); i <= (b); ++i)
#define rep(i,n) FOR(i,0,n)
#define rep_eq(i,n) FOR_EQ(i,0,n)
#define DEBUG_VARIABLE(variable) cout << #variable << ":" << variable << endl
#define INFTY 1000000000000
#define WHITE 1//（未訪問）
#define GRAY 2//（訪問）未だに訪問していない頂点への辺を持っている。スタックに退避。
#define BLACK 3//（訪問完了）未訪問への頂点への辺を持たない
//=====================================================
// 型定義部
//=====================================================
typedef unsigned long long ull;
typedef long long ll;
typedef pair<ll, ll>    ll_ll;
typedef vector<ll> Vector;
typedef vector<Vector> DVector;
typedef vector< pair<ll, ll> > Vec_Pair;
template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}
//===================================================
// 関数のプロトタイプ宣言・関数に必要な配列の宣言
//===================================================
template <class X> void printArray(X *array, ll);
template <class X> void printVector(vector<X> &v);
template <class X> void printDimention(vector< vector<X> > &dv);
template <class X> void printMap(X);
template <class X> void printVecPair(vector<X> &v);
void printDV_Pair(vector<vector<pair<ll, ll> > > &v);
void printSet(set<ll> &S);
// 繰返し自乗法
ll RepeatSquaring(ll a, ll index);
// 最大公約数
ll GCD(ll, ll);
// 最小公倍数
ll LCM(ll, ll);
// 割り算した時に余りが有る時だけ、+1の商を返す。
ll div_one(ll res, ll div);

//===================================================
// グローバル
//===================================================
const int MOD = 1000000007;
//1個上から時計周り
const int ddx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const int ddy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
//上右下左
const int dx[4] = {0, 1, 0, -1};    // dj
const int dy[4] = {-1, 0, 1, 0};    // di
static const int NIL = -1;

ll n, N, k, K;

//===================================================
// 関数
//===================================================


//===================================================
// main 問題処理部
//===================================================
int main(int argc, char const *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N;
    Vector times(pow(10, 5) + 1, 0);
    rep(i, N){
        ll tmp;
        cin >> tmp;
        times[tmp]++;
    }
    ll sum = 0;
    rep_eq(i, pow(10, 5)){
        sum += i * times[i];
    }
    ll Q;
    cin >> Q;
    rep(i, Q){
        ll b, c;
        cin >> b >> c;
        sum -= b * times[b];
        sum -= c * times[c];
        times[c] += times[b];
        times[b] = 0;
        sum += c * times[c];
        cout << sum << endl;
    }

    return 0;
}

//=====================================================
// 関数群
//=====================================================

template<class X> void printArray(X array[], ll n){
    rep(i, n){
        if(i)   cout << " ";
        cout << array[i];
    }
    cout << endl;
}

template<class X> void printVector(vector<X> &v){
    rep(i, (int)v.size()){
        if(i)   cout << " ";
        cout << v[i];
    }
    cout << endl;
}

//二次元配列の表示
template<class X> void printDimention(vector< vector<X> > &dv){
    rep(i, (ll)dv.size()){
        rep(j, (ll)dv[i].size()){
            if(j)   cout << " ";
            cout << dv[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

//mapの表示
template <class X> void printMap(X mp) {
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
}

// 内部にpairを内包したvectorの表示
template <class X> void printVecPair(vector<X> &v){
    rep(i, (int)v.size()){
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

// 内部にVec_Pairを内包したvectorの表示
void printDV_Pair(vector<vector<pair<ll, ll> > > &v){
    rep(i, (int)v.size()){
        cout << i << endl;
        rep(j, (int)v[i].size()){
            cout << v[i][j].first << " " << v[i][j].second << endl;
        }
        cout << endl;
    }
    cout << endl;
}

void printSet(set<ll> &S){
    for(set<ll>::iterator it = S.begin(); it != S.end(); it++){
        if(it != --S.end() ) cout << *it << " ";
        else    cout << *it << endl;
    }
}

ll RepeatSquaring(ll a, ll index){
    if(index == 0)  return  1;
    else if(index % 2 == 0){
        ll tmp = RepeatSquaring(a, index / 2);
        return tmp * tmp;
    }else{
        return a * RepeatSquaring(a, index - 1);
    }
}

//最大公約数(Greatest Common Divisor)
// ユークリッドの互除法使用
ll GCD (ll a, ll b){
    return b ?  GCD(b, a % b) : a;
}

//最小公倍数(Least Common Multiple)
ll LCM(ll m, ll n){
    //引数に0がある場合は0を返す
    if(m == 0 || n == 0)    return 0;

    //lcm = m * n / gcd(m, n)
    return ((m / GCD(m, n)) * n);
}

// 割り算した時に余りが有る時だけ、+1の商を返す。
ll div_one(ll res, ll div){
    // res 割られる数、div 割る数
    return (res + div - 1)/div;
}