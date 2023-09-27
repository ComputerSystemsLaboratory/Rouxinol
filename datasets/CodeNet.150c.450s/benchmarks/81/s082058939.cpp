#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;
const int maxn=50;
int time[maxn],minn,pos,n;
bool vis[maxn];
vector <pair<int,int> > ve[maxn];
void init() {
    pos=-1;
    minn=0x7f7f7f7f;
    for(int i=0;i<=n;i++)
        ve[i].clear();
    int m=0;
    for(int i=1;i<=n;i++) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        ve[a].push_back(make_pair(b,c));
        ve[b].push_back(make_pair(a,c));
        m=max(m,a);
        m=max(m,b);
    }
    n=m;
}

void spfa(int s) {
    queue <int> qu;
    memset(vis,0,sizeof(vis));
    memset(time,0x7f,sizeof(time));
    qu.push(s);
    time[s] = 0;
    while(!qu.empty()) {
        int now=qu.front(); 
		qu.pop();
        vis[now]=false;
        for(int i=0;i<ve[now].size();i++) {
            int v=ve[now][i].first;
            int d=ve[now][i].second;
            if(d+time[now]<time[v]) {
                time[v]=time[now] + d;
                if(!vis[v]) {
                    qu.push(v);
                    vis[v] = true;
                }
            }
        }
    }
}

bool updatamin() {
    int sum=0;
    for(int i=0;i<=n;i++)
        sum+=time[i];
    if(sum<minn) {
        minn=sum;
        return true;
    }
    return false;
}

int main() {
    while(scanf("%d",&n)) {
    	if(n==0) break;
        init();
        for(int i=0;i<=n;i++) {
            spfa(i);
            if(updatamin()) {
                pos = i;
            }
        }
        printf("%d %d\n",pos,minn);
    }
    return 0;
}
