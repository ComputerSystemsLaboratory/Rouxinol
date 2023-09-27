#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using P = pair<int, int>;
using Tapris = tuple<int, int, int>;

#define REP(i, n) for(LL i = 0; i < n; ++i)
#define FOR(i, a, n) for(LL i = a; i < n; ++i)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()

const int INF = (int)1e9;
const LL INFL = (LL)1e15;
const int MOD = 1e9 + 7;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

//#define int long long

/*************** using variables ***************/
int a, d, n;
vector<LL> sosuu_list;
/**********************************************/
bool isprime(LL x){
    if(x == 2) return true;
    if(x < 2 || x % 2 == 0) return false;
    LL i = 3;
    LL sqrtx = sqrt(x);
    while(i <= sqrtx){
        if(x % i == 0) return false;
        i += 2;
    }
    return true;
}
// maxまでの素数をvectorに入れて返す
vector<LL> eratos(LL max){
    vector<LL> primeVec;
    vector<bool> isprime;
    double sqrtmax = sqrt(max);
    isprime.resize(max + 1);
    isprime[0] = false; isprime[1] = false;
    FOR(i, 2, max + 1){
        isprime[i] = true;
    }
    FOR(i, 2, sqrtmax){
        if(isprime[i]){
            for(int j = 0; i * (j + 2) < max + 1; ++j){
                isprime[i * (j + 2)] = false;
            }
        }
    }
    REP(i, max + 1){
        if(isprime[i])  primeVec.pb(i);
    }
    return primeVec;
}
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(cin >> a >> d >> n, a != 0 && d != 0 && n != 0){
        int cnt = 0;
        while(1){
            if(isprime(a+d*cnt)) n--;
            if(n == 0) break;
            cnt++;
        }
        cout << a+d*cnt << endl;
    }
}

