#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define REP(i,a,b) for(int i=a; i<=int(b); i++)
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pi;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll ans[10011]={0};
    REP(i,1,101){
        REP(j,1,101){
            REP(k,1,101){
                ll cur=i*i+j*j+k*k+i*j+i*k+j*k;
                if(cur<=10010) ans[cur]++;
            }
        }
    }
    ll n;
    cin >> n;
    REP(i,1,n) cout << ans[i] << endl;
    return 0;
}
