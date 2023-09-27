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

ll n,q;
queue<pair<ll,ll> > que;
char name[100001][20];

int main(void){
    ll now;
    scanf("%lld%lld",&n,&q);
    REP(i,n){
        ll a;
        scanf("%s%lld",&name[i][0],&a);
        que.push(pair<ll,ll>(i,a));
    }

    now = 0;
    while(que.empty() == false){
        pair<ll,ll> a;
        a = que.front();
        que.pop();
        if(a.second <= q){
            now += a.second;
            printf("%s %lld\n",&name[a.first][0],now);
        }else{
            now += q;
            a.second -= q;
            que.push(a);
        }
    }
    return 0;
} 