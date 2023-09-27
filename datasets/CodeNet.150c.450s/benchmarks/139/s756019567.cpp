#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int visited[200005],high[200005];
typedef struct ANode{
    long long adjvex;                 
    struct ANode *nextarc;                  
} ArcNode;                      
typedef struct Vnode{               
    int count;                  
    ArcNode *firstarc;          
}VNode;                     
typedef struct node{
    VNode adjlist[100005]; 
}AdjGraph;
void add(AdjGraph *G,ll u,ll v){
    ArcNode *p;
    p=(ArcNode *)malloc(sizeof(ArcNode));
    p->adjvex=v;
    p->nextarc=G->adjlist[u].firstarc;  
    G->adjlist[u].firstarc=p;
    p=(ArcNode *)malloc(sizeof(ArcNode));
    p->adjvex=u;
    p->nextarc=G->adjlist[v].firstarc;  
    G->adjlist[v].firstarc=p;
}
void BFS(AdjGraph *G){
    ll w,i;
    ArcNode *p;
    queue<long long> qu;                                                                        
    for (i=1;i<=n;i++) visited[i]=0;                              
    visited[1]=1;                       
    qu.push(1);
    while(qu.size()){ 
        w=qu.front();
        qu.pop();                    
        p=G->adjlist[w].firstarc;            
        while (p!=NULL){    
            if (visited[p->adjvex]==0){     
                visited[p->adjvex]=1;
                high[p->adjvex]=w;       
                qu.push(p->adjvex);      
            }
            p=p->nextarc;                    
        }
        
    }
}
int main(){
    ll a,b,m;
    AdjGraph *G;
    G=(AdjGraph *)malloc(sizeof(AdjGraph));
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        cin>>a>>b;
        add(G,a,b);
	}
    for(ll i=1;i<=n;i++)
        high[i]=0;
    BFS(G);
    for(ll i=1;i<=n;i++)
        if(!visited[i]){
            cout<<"No"<<endl;
            return 0;
        }
    cout<<"Yes"<<endl;
    for(ll i=2;i<=n;i++){
        cout<<high[i]<<endl;
    }
    return 0;
}