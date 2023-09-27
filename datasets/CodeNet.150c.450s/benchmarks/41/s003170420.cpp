//INCLUDE
//------------------------------------------
#include <bits/stdc++.h>
//DEFINE
//------------------------------------------
#define ll long long
#define ld long double
#define ALLv(a)  (a).begin(),(a).end()
#define ALL(a,n)  (a),(a)+n
#define vi vector<long long>
#define vd vector<long double>
#define vs vector<string>
#define dcml(n) fixed<<setprecision(n)
//CONST
//------------------------------------------
const ll INF=1010000000000000017LL;
const ll MOD=1000000007LL;
const ld EPS=1e-12;
const ld PI=3.14159265358979323846;
//REPEAT
//------------------------------------------
#define   FOR(i,m,n) for(ll (i)=(m);   (i)<(n);  (i)++)
#define  FORS(i,m,n) for(ll (i)=(m);   (i)<=(n); (i)++)
#define  RFOR(i,m,n) for(ll (i)=(n)-1; (i)>=(n); (i)--)
#define RFORS(i,m,n) for(ll (i)=(n);   (i)>(n);  (i)--)
#define   REP(i,n)   for(ll (i)=0;     (i)<(n);  (i)++)
#define  REPS(i,x)   for(ll (i)=1;     (i)<=(x); (i)++)
#define  RREP(i,x)   for(ll (i)=(x)-1; (i)>=0;   (i)--)
#define RREPS(i,x)   for(ll (i)=(x);   (i)> 0;   (i)--)
#define  WREP(i,in,j,jn) REP(i,in)REP(j,jn)
#define WREPS(i,in,j,jn) REPS(i,in)REPS(j,jn)
//-----------------------------------------
//namespace
using namespace std;
//ライブラリはここに
//↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓

//-----------------------------------------
ll d[110][110];
int main(void){
    ll V,E;cin>>V>>E;
    REP(i,V)REP(j,V)d[i][j]=INF;
    REP(i,E){
        ll a,b,c;cin>>a>>b>>c;
        d[a][b]=c;
    }
    REP(i,V)d[i][i]=0;
    REP(k,V){
        REP(i,V){
            REP(j,V){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    REP(i,V){
        if(d[i][i]<0){
            cout<<"NEGATIVE CYCLE\n";
            exit(0);
        }
    }
    REP(i,V){
        REP(j,V){
            cout<<(d[i][j]<INF/10?to_string(d[i][j]):"INF");
            if(j!=V-1)cout<<" ";
            else cout<<"\n";
        }
    }
}
