#include<bits/stdc++.h>
#define ii pair<int,int>
#define iii pair<int,ii>
#define inf 1000000000
using namespace std;

long long n,e,r,dist[2*1003];
vector<iii>graph;
void init(){
    cin>>n>>e>>r;
    for(int i=0; i<e; i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph.push_back(iii(w,ii(u,v)));
    }
}

bool bellman(int s){
    dist[s]=0;
    int len=graph.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<len; j++){
            int u=graph[j].second.first,
                v=graph[j].second.second,
                w=graph[j].first;
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
            }
        }
    }
    for(int i=0; i<len; i++){
        int u=graph[i].second.first,
            v=graph[i].second.second,
            w=graph[i].first;
        if(dist[u]+w<dist[v] && dist[v]<100000)return true;
    }
    return false;
}

void Back(){
    for(int i=0; i<n+7; i++)dist[i]=inf;
}

int main(){
    init();
    Back();
    bool neg=bellman(r);
//    cout<<neg<<endl;
    if(neg)printf("NEGATIVE CYCLE\n");
    else{
        for(int i=0; i<n; i++){
            if(dist[i]>=100000)printf("INF\n");
            else printf("%lld\n",dist[i]);
        }
    }
return 0;
}


