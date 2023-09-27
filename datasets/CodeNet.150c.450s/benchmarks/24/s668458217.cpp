#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,M;
    for(;;){
        scanf("%d%d",&N,&M);
        if(N==0&&M==0) break;
        int d,p,len=0;
        vector<pair<int,int>> ds(N);
        for(auto &pa : ds){
            scanf("%d%d",&d,&p);
            pa=make_pair(p,d);
            len+=d;
        }
        sort(begin(ds),end(ds));
        int ans=0,rem=max(len-M,0);
        for(auto &p : ds){
            int nd=min(p.second,rem);
            ans+=p.first*nd;
            rem-=nd;
            if(rem==0) break;
        }
        printf("%d\n",ans);
    }
}