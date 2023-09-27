#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define repr(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define invrepr(i,a,b) for(int i=b-1;i>=a;i--)
#define invrep(i,n) invrepr(i,0,n)
#define repitr(itr,a) for(auto itr=a.begin();itr!=a.end();++itr)
#define P pair<int,int>
const int MOD=1e9+7;
const int INF=2e9;

map<ll,int> prime_factor(ll n) {
    map<ll,int> res;
    repr(i,2,sqrt(n)+1) {
        while (n%i==0) {
            ++res[i];
            n/=i;
        }
    }
    if(n!=1) ++res[n];
    return res;
}


int main() {
    ios_base::sync_with_stdio(false);

    ll n;
    cin >> n;
    map<ll,int> pf=prime_factor(n); 
    cout << n << ": "; 
    repitr(itr,pf) {
        rep(j,itr->second) {
            cout << itr->first;
            if (!(next(itr,1)==pf.end() && j==itr->second-1)) cout << ' ';
        }
    }
    cout << endl;

    return 0;   
}

