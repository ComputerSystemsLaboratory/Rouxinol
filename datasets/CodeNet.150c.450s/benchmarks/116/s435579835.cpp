#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
 
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
ll n,k;
ll a[200000];

bool input(){
    scanf("%lld%lld",&n,&k);
    if(n == 0 && k == 0)
        return false;
    REP(i,n)
        scanf("%lld",a + i);
    return true;
}
void solve(){
    ll sum = 0;
    REP(i,k){
        sum += a[i];
    }
    ll maxi = sum;
    REP(i,n - k){
        sum = sum - a[i] + a[i + k];
        maxi = max(maxi,sum);
    }
    printf("%lld\n",maxi);
}
int main(){
    while(input())
    solve();
}