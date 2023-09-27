#include <bits/stdc++.h>
using namespace std;

// 型定義
typedef long long ll;
typedef pair<ll, ll> P;

// forループ
#define REP(i,n) for(ll i=0; i<(ll)(n); ++i)

// 定数宣言
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

// グラフ表現
using Graph = vector<vector<int>>;

// グラフの辺表現
using Edge = map<pair<int,int>,int>;

// n次元配列の初期化。第２引数の型のサイズごとに初期化していく。
template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

// 最大公約数
ll gcd(ll a,ll b){
   if (a%b == 0) return(b);
   else return(gcd(b, a%b));
}

// 最小公倍数
ll lcm(ll a, ll b){
    return a/gcd(a, b) * b;
}

int main()
{
    cout << fixed << setprecision(15);
    ll D;
    cin >> D;

    vector<ll> C(26);
    REP(i, 26){
        cin >> C[i];
    }

    vector<vector<ll>> S(D+1, vector<ll>(26));
    vector<ll> t(D+1);

    for(ll i=1; i<=D; i++){
        REP(j, 26){
            cin >> S[i][j];
        }
    }
    for(ll i=1; i<=D; i++){
        cin >> t[i];
    }

    vector<ll> v(D+1);

    vector<ll> last(26, 0);

    v[0] = 0;
    for(ll i=1; i<=D; i++){
        v[i] = v[i-1] + S[i][t[i]-1];
        last[t[i]-1] = i;
        ll minus = 0;
        REP(j, 26){
            minus += C[j] * (i - last[j]);
        }
        v[i] -= minus;
    }

    for(ll i=1; i<=D; i++){
        cout << v[i] << endl;
    }
    return 0;
}