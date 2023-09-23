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

ll a,b,n,x[100],y[100];
bool is_c[100][100];

ll search(ll x,ll y){
    if(x == a - 1 && y == b - 1)
    return 1;

    if(x >= a || y >= b || is_c[x][y])
        return 0;
    return search(x + 1,y) + search(x,y + 1);
}

bool input(){
    scanf("%lld%lld",&a,&b);
    if(a == 0 && b == 0)
        return false;
    scanf("%lld",&n);
    REP(i,n){
        scanf("%lld%lld",x + i,y + i);
        x[i]--;y[i]--;
    }
    return true;
}

void solve(){
    REP(i,a)
        REP(j,b)
            is_c[i][j] = false;
    REP(i,n)
        is_c[x[i]][y[i]] = true;
    printf("%lld\n",search(0,0));
}

int main(){
    while(input())
        solve();
    return 0;
}