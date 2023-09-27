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

int main(){
    int n;
    ll m = 100000;
    scanf("%d",&n);

    REP(i,n){
        ll l = m * 5 / 100;
        m += l;
        m = (m + 999) / 1000 * 1000;
    }
    printf("%lld\n",m);
    return 0;
}