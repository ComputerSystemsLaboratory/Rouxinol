#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
typedef pair<int,int>pii;
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m),n||m){
        vector<pii>V(n);
        for(int i=0;i<n;i++){
            int d,p;
            scanf("%d%d",&d,&p);
            V[i]=pii(p,d);
        }
        sort(V.rbegin(),V.rend());
        int ans=0;
        for(int i=0;i<n;i++){
            int val=min(V[i].second,m);
            V[i].second-=val;
            m-=val;
            ans+=V[i].first*V[i].second;
        }
        printf("%d\n",ans);
    }

    return 0;
}