#include <iostream>
#include <cstring>
using namespace std;

struct edge{
    int node;
    edge *next;
}nodes[105];

int n,t[105][2],visit[105],cnt=0;

void dfs_visit(int i){
    t[i][0]=++cnt;
    visit[i]=1;
    edge *e=nodes[i].next;
    if(e!=NULL){
        while(e!=NULL){
            if(!visit[e->node])dfs_visit(e->node);
            e=e->next;
        }
    }
    t[i][1]=++cnt;
}

void dfs(){
    int i;
    for(i=1;i<=n;i++){
        if(visit[i]==0)dfs_visit(i);
    }
}

int main(){
    memset(visit,0,sizeof(visit));
    memset(t,0,sizeof(t));
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        int ii,n_i;
        cin>>ii>>n_i;
        edge* first=&nodes[i];
        for(j=0;j<n_i;j++){
            edge *e=new edge();
            cin>>e->node;
            first->next=e;
            first=e;
        }
    }
    dfs();
//    for(i=0;i<n;i++){
//        edge *e=nodes[i].next;
//        while(e!=NULL){
//            cout<<e->node<<" ";
//            e=e->next;
//        }
//        cout<<endl;
//    }
    for(i=1;i<=n;i++){
        cout<<i<<" "<<t[i][0]<<" "<<t[i][1]<<endl;
    }
    return 0;
}