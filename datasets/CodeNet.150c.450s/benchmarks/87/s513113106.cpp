#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>
//#include <unistd.h>
//#include <stdio.h>
#define rep(i,x) for(ll i = 0;i<x;i++)
#define all(a) (a).begin(),(a).end()
using ll = long long;
using ld = long double;
using namespace std;
using dou = double;
const ll inf = 2147483647;
const ll INF = 1LL << 60;
const ld pi = 3.14159265358;
const ll mod = 1000000007;
typedef pair<ll,ll> P;
using graph = vector<vector<ll>>;
template<class T> inline bool chmax(T& a, T b){if(a < b){a = b; return true;}return false;}
template<class T> inline bool chmin(T& a, T b){if(a > b){a = b; return true;}return false;}
ll gcd(ll a,ll b){
    if(a < b)swap(a,b);
    if(a % b == 0)return b;
    else return gcd(b,a%b);
}
//素数判定O(sqrt(N))
bool isp(ll n){
    bool res = true;
    if(n == 1)return false;
    else{
        for(ll i = 2;i * i <= n;i++){
            if(n % i == 0){
                res = false;
                break;
            }
        }
        return res;
    }
}

ll fac[510000], finv[510000], inv[510000];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < 510000; i++){
        fac[i] = fac[i - 1] * i % mod;
        inv[i] = mod - inv[mod%i] * (mod / i) % mod;
        finv[i] = finv[i - 1] * inv[i] % mod;
    }
}

// 二項係数計算
ll nCk(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % mod) % mod;
}
//nのm乗をMODで割ったあまりO(logN)
ll modpow(ll n,ll m,ll MOD){
    ll res = 1;
    while(m){
        if(m & 1)res = (res * n) % MOD;
        m >>= 1;
        n *= n;
        n %= MOD;
    }
    return res;
}

//printf("%.10f\n", N);
/*  vector<ll> vec = {1,2,5,6,8,9,10};
    cout << binary_search(all(vec),5) << endl; -> true*/
/*
    vector<ll> vec = {1,2,5,6,8,9,10};
    auto n = upper_bound(all(vec),4);
    cout << *n << endl; -> 5*/

//    cout << fixed << setprecision(15);

//const ll dx[] = {1,0,0,-1};const ll dy[] = {0,1,-1,0};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    while(true){
    vector<vector<ll>> ban(11,vector<ll>(5));
    cin >> N;
    if(N == 0)break;
    rep(i,N)
    rep(j,5)cin >> ban[i][j];
    ll ans = 0;
    bool update = false;
    while(true){
        update = false;
        rep(i,N){
            if(ban[i][0] == ban[i][1] && ban[i][1] == ban[i][2] && ban[i][0] != 0){
                update = true;
                if(ban[i][0] == ban[i][4] && ban[i][0] == ban[i][3]){
                    ans += ban[i][0] * 5;
                    ban[i][0] = 0;
                    ban[i][1] = 0;
                    ban[i][2] = 0;
                    ban[i][3] = 0;
                    ban[i][4] = 0;
                }
                else if(ban[i][0] == ban[i][3]){
                    ans += ban[i][0] * 4;
                    ban[i][0] = 0;
                    ban[i][1] = 0;
                    ban[i][2] = 0;
                    ban[i][3] = 0;
                }
                else{
                    ans += ban[i][0] * 3;
                    ban[i][0] = 0;
                    ban[i][1] = 0;
                    ban[i][2] = 0;
                }
            }
            else if(ban[i][1] == ban[i][2] && ban[i][2] == ban[i][3] && ban[i][1] != 0){
                update = true;
                if(ban[i][1] == ban[i][4]){
                    ans += ban[i][1] * 4;
                    ban[i][1] = 0;
                    ban[i][2] = 0;
                    ban[i][3] = 0;
                    ban[i][4] = 0;
                }
                else{
                    ans += ban[i][1] * 3;
                    ban[i][1] = 0;
                    ban[i][2] = 0;
                    ban[i][3] = 0;
                }
            }
            else if(ban[i][2] == ban[i][3] && ban[i][3] == ban[i][4] && ban[i][2] != 0){
                update = true;
                ans += ban[i][2] * 3;
                ban[i][2] = 0;
                ban[i][3] = 0;
                ban[i][4] = 0;
            }
        }
        if(!update)break;
        bool ok = false;
        rep(i,5){
            ok = false;
            while(true){
                ok = false;
                rep(j,N - 1){
                    if(ban[j][i] != 0 && ban[j + 1][i] == 0){
                        swap(ban[j + 1][i],ban[j][i]);
                        ok = true;
                    }
                }
                if(ok == false)break;
            }
        }
    }
    cout << ans << endl;
    /*rep(i,N){
        rep(j,5){
            cout << ban[i][j] << " ";
        }
        cout << "\n";
    }*/
    }
}
