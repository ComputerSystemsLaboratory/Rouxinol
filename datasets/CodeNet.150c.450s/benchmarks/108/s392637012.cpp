#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

struct edge{
    int node;
    edge *next;
}nodes[105];

int n,d[105],v[105];
queue<edge> E;

void bfs(){
    edge *e=E.front().next;
    while(e!=NULL){
        int num=e->node;
        if(v[num]==0){
            v[num]=1;
            d[num]=d[E.front().node]+1;
            E.push(nodes[num]);
        }
        e=e->next;
    }
    E.pop();
}

int main(){
    memset(v,0,sizeof(v));
    memset(d,-1,sizeof(d));
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        int ii,n_i;
        cin>>ii>>n_i;
        nodes[ii].node=ii;
        edge *first=&nodes[ii];
        for(j=0;j<n_i;j++){
            edge *e=new edge();
            cin>>e->node;
            first->next=e;
            first=e;
        }
    }
    d[1]=0;
    v[1]=1;
    E.push(nodes[1]);
    while(E.size()!=0){
        bfs();
    }
    for(i=1;i<=n;i++)cout<<i<<" "<<d[i]<<endl;
    return 0;
}