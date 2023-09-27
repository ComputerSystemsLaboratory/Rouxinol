#include<bits/stdc++.h>
using namespace std;

typedef long long llint;
typedef long double ld;

#define inf 1e18
#define mod 1000000007
priority_queue<llint,vector<llint>,greater<llint> > que;
priority_queue<llint> Que;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

llint mod_pow(llint x,llint n,llint md){
    llint res=1;
    while(n>0){
        if(n&1)(res*=x)%=md;
        (x*=x)%=md;
        n >>=1;
    }
    return res;
}

void solve(){
    llint n,m;
    cin >> m >> n;
    llint md=1e9+7;
    cout << mod_pow(m,n,md) << endl;
}

int main(){
  solve();
  return 0;
}

