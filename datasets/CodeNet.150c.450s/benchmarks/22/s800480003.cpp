#include<cstdio>
#include<map>
#include<vector>

using namespace std;

typedef pair<int,int> P;
typedef pair<P, int> edge; // source, target, cost
typedef long long int lli;

lli dis[100000];
vector<edge> edges;

int main(void) {
    lli v,e,r;
    scanf("%lld%lld%lld",&v,&e,&r);
    for(lli i=0; i<e; i++) {
        int s,t,d;
        scanf("%d%d%d",&s,&t,&d);
        edges.push_back(edge(P(s,t),d));
    }
    for(lli i=0; i<v; i++)
        dis[i] = 0xFFFFFFFF;


    dis[r] = 0;

    for(lli i=0; ; i++) {
        bool flag = false;
        for(vector<edge>::iterator it=edges.begin(); it != edges.end(); it++) {
            if(dis[it->first.first] == 0xFFFFFFFF)
                continue;
            if(dis[it->first.first] + it->second < dis[it->first.second]) {
                dis[it->first.second] = dis[it->first.first] + it->second;
                flag = true;
            }
        }
        if(!flag) break;
        if(i>2*v) {
            printf("NEGATIVE CYCLE\n");
            return 0;
        }

    }
    for(lli i=0; i<v; i++)
        if(dis[i] == 0xFFFFFFFF)
            printf("INF\n");
        else
            printf("%lld\n", dis[i]);

    return 0;
}