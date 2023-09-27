#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n + 1); ++i)
using namespace std;
using ll = long long;
const int INF = +100100100;
// typedef pair<int,int> P;
const int MAX = 1000000;
const ll MO = 1000000007;

ll pow(ll x, ll n, ll M){
    ll res = 1;
    if(n>0){
        res = pow(x,n/2,M);
        if(n%2==0)res=(res*res)%M;
        else res = (((res*res)%M)*x)%M;
    }
    return res;
}

int main(){
    int n,m;
    cin >> m >> n;
    // printf("%15d\n",rel);
    cout << pow(m,n, MO) << endl;
    return 0;
}
