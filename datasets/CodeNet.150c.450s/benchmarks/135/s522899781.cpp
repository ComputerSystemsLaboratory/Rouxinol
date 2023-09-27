#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
using namespace std;
const int MAXN = (int) 1500 + 10;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;

int m,n;
int h[MAXN],w[MAXN];
int cnt[1500000 + 10];

void work(){
    while(scanf("%d%d",&n,&m)&&n&&m){
        for(int i=1;i<=n;i++) scanf("%d",&h[i]);
        for(int i=1;i<=m;i++) scanf("%d",&w[i]);
        for(int i=2;i<=n;i++) h[i]+=h[i-1];
        for(int i=2;i<=m;i++) w[i]+=w[i-1];
        for(int i=1;i<=1500000;i++) cnt[i]=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                cnt[h[j]-h[i]]++;
            }
        }
        LL ans=0;
        for(int i=0;i<m;i++){
            for(int j=i+1;j<=m;j++) ans+=cnt[w[j]-w[i]];
        }
        printf("%lld\n",ans);
    }
}

int main(){
    work();
    return 0;
}











