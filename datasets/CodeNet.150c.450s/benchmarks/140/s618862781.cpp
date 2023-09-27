#include <stdio.h>
#include <queue>
#include <vector>
#include <bitset>
#include <utility>
using namespace std;
typedef pair<int,int> pi;
#define F first
#define S second
#define MP make_pair
#define PB push_back
const int N=10010;
const int M=100010;
const int INF=1<<30;
int prim(int n,int m){
    int ans=0,l,r,temp,dis[N];
    bitset<N> went;
    vector<pi>graph[N];
    pi nxt;
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&l,&r,&temp);
        graph[l].PB(MP(temp,r));
        graph[r].PB(MP(temp,l));
    }
    for(int i=1;i<n;i++)dis[i]=INF;
    dis[0]=0;
    pq.push(MP(0,0));
    went.reset();
    while(n>0){
        nxt=pq.top();
        pq.pop();
        if(went[nxt.S])continue;
        went[nxt.S]=true;
        ans+=dis[nxt.S];
        for(int i=0;i<graph[nxt.S].size();i++)if(!went[graph[nxt.S][i].S]){
            if(dis[graph[nxt.S][i].S]>graph[nxt.S][i].F){
                dis[graph[nxt.S][i].S]=graph[nxt.S][i].F;
                pq.push(graph[nxt.S][i]);
            }
        }
        n--;
    }
    return ans;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d\n",prim(n,m));
}
