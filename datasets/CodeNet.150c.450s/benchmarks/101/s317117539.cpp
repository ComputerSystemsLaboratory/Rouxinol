#include<iostream>
#include<vector>
using namespace std;

static const int N=100000;
static const int NIL=-1;

vector<int> G[N];
int color[N];

void paint(int u,int c){
    color[u]=c;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(color[v]==NIL) paint(v,c);
    }
}

int main(){
    int n,m,s,t,q;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>s>>t;
        G[s].push_back(t);
        G[t].push_back(s);
    }
    for(int i=0;i<n;i++) color[i]=NIL;

    int id=1;
    for(int i=0;i<n;i++){
        if(color[i]==NIL) paint(i,id++);
    }

    cin>>q;
    for(int i=0;i<q;i++){
        cin>>s>>t;
        if(color[s]==color[t]) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
