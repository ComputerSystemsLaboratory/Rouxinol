#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair
const int inf=1e9+7;
const ll mod=1e9+7;
const ll big=1e18;

int main() {
    ll n, m;
    cin>>m>>n;
    ll two;
    ll ans = 1;
    ll tmpans;
    while(n>0){
        two = 1;
        tmpans = m;
        while(2*two <= n){
            two *= 2;
            tmpans *= tmpans;
            tmpans %= mod;
        }
        n -= two;
        ans *= tmpans;
        ans %= mod;
    }
    cout<<ans<<endl;
}


