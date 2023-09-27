#include<iostream>
#include<cstring>

using namespace std;

int n,m,q,v[100005],color[100005];

struct edge{
    int index;
    edge *next;
};

struct head{
    int index;
    edge *first;
}heads[100005];

void dfs(int pre,int num,int c){
    v[num]=1;
    color[num]=c;
    edge *e=heads[num].first;
    while(e!=NULL){
        if(e->index!=pre&&v[e->index]==0)
            dfs(num,e->index,c);
        e=e->next;
    }
}

int main(){
    memset(v,0,sizeof(v));
    memset(color,0,sizeof(color));
    memset(heads,0,sizeof(heads));
    cin>>n>>m;
    int i,j,c=0;
    for(i=0;i<n;i++){
        heads[i].index=i;
    }
    for(i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        edge *e1=new edge();
        edge *e2=new edge();
        e1->index=b;
        e2->index=a;
        e1->next=heads[a].first;
        e2->next=heads[b].first;
        heads[a].first=e1;
        heads[b].first=e2;
    }
    for(i=0;i<n;i++){
        if(v[i]==0)dfs(-1,i,++c);
    }
    cin>>q;
    for(i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        if(color[a]==color[b])cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}