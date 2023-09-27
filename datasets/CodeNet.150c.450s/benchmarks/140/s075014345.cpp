#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <utility>
#include <bitset>
using namespace std;
typedef pair<int,int> pi;
#define F first
#define S second
#define MP make_pair
#define PB push_back
const int N=10010;
const int INF=1<<30;
vector<pi> v[N];
int Prim(int n){
    int ans=0,dis[n];
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    pi temp; 
    bitset<N>b;
    dis[0]=0;
    b.reset();
    b[0]=true;
    for(int i=1;i<n;i++)dis[i]=INF;
    for(int i=0;i<v[0].size();i++){
        dis[v[0][i].S]=v[0][i].F;
        pq.push(v[0][i]);
    }
    n--;
    while(n>0){
        temp=pq.top();
        pq.pop();
        if(b[temp.S])continue;
        b[temp.S]=true;
        ans+=dis[temp.S];
        for(int i=0;i<v[temp.S].size();i++)if(!b[v[temp.S][i].S]){
            if(dis[v[temp.S][i].S]>v[temp.S][i].F){
                dis[v[temp.S][i].S]=v[temp.S][i].F;
                pq.push(MP(dis[v[temp.S][i].S],v[temp.S][i].S));
            }
        }
        n--;
    }
    return ans;
}
int main(){
    int n,m,l,r,temp;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&l,&r,&temp);
        v[l].PB(MP(temp,r));
        v[r].PB(MP(temp,l));
    }
    printf("%d\n",Prim(n));
}
