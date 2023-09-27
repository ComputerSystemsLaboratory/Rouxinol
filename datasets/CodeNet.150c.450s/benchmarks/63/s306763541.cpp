#include <stdio.h>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
typedef pair<int,int> pi;
#define F first
#define S second
#define MP make_pair
#define PB push_back
const int N=1e5+10;
const int INF=1e9+10;
int main(){
int n,m,s,d[N],l;
pi temp,nxt;
vector<pi> graph[N];
priority_queue<pi,vector<pi>,greater<pi>>pq;
scanf("%d%d%d",&n,&m,&s);
for(int i=0;i<n;i++)d[i]=INF;
d[s]=0;
while(m--){
scanf("%d%d%d",&l,&temp.F,&temp.S);
graph[l].PB(temp);
}
pq.push(MP(0,s));
while(!pq.empty()){
nxt=pq.top();
pq.pop();
if(d[nxt.S]<nxt.F)continue;
for(int i=0;i<graph[nxt.S].size();i++)if(nxt.F+graph[nxt.S][i].S<d[graph[nxt.S][i].F]){
d[graph[nxt.S][i].F]=nxt.F+graph[nxt.S][i].S;
pq.push(MP(d[graph[nxt.S][i].F],graph[nxt.S][i].F));
}
}

for(int i=0;i<n;i++)if(d[i]==INF)printf("INF\n");
else printf("%d\n",d[i]);
}
