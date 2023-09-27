#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<cstring>
using namespace std;
const int MAXN = (int) 105;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;

int m,n;
vector<pair<int,int> > g;

void work(){
    while(~scanf("%d%d",&n,&m)){
        if(m==0&&n==0) return;
        int tot=0;
        g.clear();
        for(int i=1;i<=n;i++){
            int d,p; scanf("%d%d",&d,&p);
            tot+=d;
            g.push_back(make_pair(p,d));
        }
        sort(g.begin(),g.end());
        int ans=0;
        tot-=m;
//        printf("tot = %d , m = %d\n",tot,m);
        for(int i=0;tot>0&&i<g.size();i++){
            int p=g[i].first;
            int d=g[i].second;
            if(tot>d){
                tot-=d;
                ans+=d*p;
            }
            else{
                ans+=tot*p;
                tot=0;
            }
        }
        printf("%d\n",ans);
    }
}

int main(){
#ifdef NNever
    freopen("data.in","r",stdin);
    freopen("out.txt","w",stdout);
#endif // NNever
    work();
    return 0;
}

