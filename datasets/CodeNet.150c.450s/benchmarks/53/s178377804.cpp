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


void prime_factorization(ll n,vector<ll> &vec){
    ll temp = n;

    for(ll i = 2;i*i <= n;i++){
        if(temp == 1) break;
        while(temp % i == 0){
            vec.push_back(i);
            temp /= i;
        }
    }
    if(temp != 1) vec.push_back(temp);
    return;
}


int main(){
    ll n; cin >> n;
    vector<ll> vec;
    prime_factorization(n, vec);
    
    cout << n << ":";
    rep(i,0,vec.size()){
        cout << " " << vec[i];
    }
    cout << endl;
    return 0;
}

