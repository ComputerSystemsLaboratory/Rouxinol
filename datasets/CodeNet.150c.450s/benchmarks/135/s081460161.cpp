#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<set>
using namespace std;
typedef vector<string>vs;
typedef vector<int>vi;
typedef vector<vi>vvi;
typedef vector<double>vd;
typedef pair<int,int>pii;
typedef long long ll;
typedef pair<ll,ll>pll;
typedef vector<ll>vl;
#define rrep(i,x,n) for(int i=(x);i<(n);++i)
#define rep(i,x) rrep(i,0,(x))
#define fi first
#define se second
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define pb push_back
#define maxs(a,b) (a)=max(a,b)
#define mins(a,b) (a)=min(a,b)

int main(){
    int N,M;
    while(scanf("%d%d",&N,&M),N||M){
        vi x(N+1,0),y(M+1,0);
        map<int,int>a,b;
        rep(i,N){
            scanf("%d",&x[i+1]);
            x[i+1]+=x[i];
        }
        rep(i,M){
            scanf("%d",&y[i+1]);
            y[i+1]+=y[i];
        }

        rep(i,N){
            rrep(j,i+1,N+1){
                a[x[j]-x[i]]++;
            }
        }
        rep(i,M){
            rrep(j,i+1,M+1){
                b[y[j]-y[i]]++;
            }
        }

        ll ans=0;
        rep(i,1500001){
            if(a.find(i)==a.end()||b.find(i)==b.end())continue;
            ans+=a[i]*b[i];
        }

        printf("%lld\n",ans);
    }
    return 0;
}