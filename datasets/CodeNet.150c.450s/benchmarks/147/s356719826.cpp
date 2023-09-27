#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep1(i,n) for(int i=1;i<=(int)n;i++)
#define sp(n) cout << fixed << setprecision(n)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef long long ll;
using namespace std;
int main(void){
    ll n;cin>>n;
    map<ll,ll> mp;
    for(int x=1;x<200;x++){
        for(int y=1;y<200;y++){
            for(int z=1;z<200;z++){
                ll buf=x*x+y*y+z*z+x*y+y*z+z*x;
                mp[buf]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<mp[i]<<endl;
    }
}