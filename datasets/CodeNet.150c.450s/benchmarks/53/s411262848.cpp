#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define vi vector<int>
#define vl vector<long long>
#define vvi vector< vector<int> >
#define vvl vector< vector<ll> >
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REPD(i, n) for (int i = (int)(n-1); i >= 0; i--)
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define FORD(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define INF 1e18
#define INFTY 1e9
#define MOD 1e9+7

template<class T> bool chmax(T &a, const T & b) {
    if (a<b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> bool chmin(T &a, const T & b) {
    if (a>b) {
        a = b;
        return true;
    }
    return false;
}

//struct edge {int to, cost;};
//vector< vector<edge> > es;
const int MAX_N = 100000;
bool is_prime[MAX_N];
int n;

void sieve() {
    REP(i, MAX_N) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    FOR(i, 2, (int)(sqrt(MAX_N)+1)) {
        if (!is_prime[i]) continue;
        for (int j = i*2; j < MAX_N; j+=i) {
            is_prime[j] = false;
        }
    }
}

void solve() {
    cout << n << ':';
    int sqrt_n = (int)sqrt(n);
    sieve();
    FOR(i, 2, sqrt_n+1) {
        if (!is_prime[i]) continue;
        if (n % i != 0) continue;
        cout << ' ' << i;
        n /= i;
        while (n % i == 0) {
            cout << ' ' << i;
            n /= i;
        }
    }
    if (n != 1) cout << ' ' << n;
    cout << endl;
}

int main() {
    cin >> n;
    
    solve();

    return 0;
}
