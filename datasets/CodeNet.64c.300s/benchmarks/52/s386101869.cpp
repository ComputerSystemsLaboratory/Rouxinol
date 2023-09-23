#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
typedef pair<ll, pair<ll, ll> > P3;

const ll MOD = ll(1e9 + 7);
const ll LLINF = LLONG_MAX;
const int IINF = INT_MAX;
const int MAX_N = int(1e5) + 5;
const double EPS = 1e-8;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int rec(int i, int j, int k){
    if(i==0){
        if(k==0)return 1;
        else return 0;
    }
    int res = 0;
    for (int x = j+1;x<=min(9,k);x++){
        res += rec(i-1,x,k-x);
    }
    return res;
}

int main() {
    while(1){
        int n,s;
        cin >> n >> s;
        if(n==0 && s==0)break;
        cout << rec(n,-1,s) << endl;
    }
    
    return 0;
}

