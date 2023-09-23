#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> P;
typedef pair<P,ll> PLL;
typedef pair<P,P> PP;
typedef vector<ll> VECLL;
typedef vector<P> VECP;
typedef priority_queue<P,VECP,greater<P> > PQP;
typedef priority_queue<ll, VECLL, greater<ll> > PQll;

#define rep(i,a,n) for(ll i = a;i < n;i++)   
#define rrep(i,a,n) for(ll i = n; i >= a;i--)
#define index_check(i,n) if(i > n-1 || i < 0) continue; 
#define LINF (ll)1e18
#define INF (int)1e9
#define fs first
#define sc second

const ll MOD = 1e9+7;

ll mod_pow(ll a, ll x, ll n){
    ll res = 1,index = 0;
    ll pow_list[30] = {};
    ll temp = x;
    pow_list[0] = a;

    while(temp){
        if(temp % 2) res = (res * pow_list[index]) % n; 

        pow_list[index+1] = (pow_list[index] * pow_list[index]) % n;
        index++;
        temp /= 2;
    }

    return res;
}


int main(){
    ll n,m;
    cin >> n >> m;
    cout << mod_pow(n,m,(ll)1e9+7) << endl;
    return 0;
}

