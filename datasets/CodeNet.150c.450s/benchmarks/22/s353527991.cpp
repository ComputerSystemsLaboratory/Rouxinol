#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <cstdio>

#define INF 2000000
#define _for(j,N) for(int i = (j); i < (N);++i)

using namespace std;

struct Edge{
    int t;
    int wt;
    Edge(int ti,int wti):t(ti),wt(wti){;}
};

struct Graph{
    int V;
    int E;
    vector<forward_list<Edge> > adj;
    Graph(int v,int e):V(v),E(e){
        adj.resize(V);
    }
    void addEdge(int s,int t,int w){adj[s].push_front(Edge(t,w));}
    void spfa(int s);
};

void Graph::spfa(int s){
    vector<bool> flag(V,false);
    list<int> que;
    vector<int> ans(V,INF);
    vector<int> cnt(V,0);

    que.push_front(s);
    cnt[s] = 1;
    ans[s] = 0;
    flag[s] = true;
    while(!que.empty()){
        int now = que.front();
        que.erase(que.begin());
        flag[now] = false;

        for(auto a = adj[now].begin();a != adj[now].end();++a){
            if(a->wt + ans[now] < ans[a->t]){
                 ans[a->t] = a->wt + ans[now];
                 if(!flag[a->t]){
                    flag[a->t] = true;
                    if(V == ++cnt[a->t]) {printf("NEGATIVE CYCLE\n");return;}
                    if(!que.empty()&&ans[a->t] < ans[que.front()]){
                        que.push_front(a->t);
                    }
                    else que.push_back(a->t);
                 }
            }
        }
    }
    _for(0,V){
            if(ans[i] == INF) printf("INF\n");
            else printf("%d\n",ans[i]);
        }
}

int main()
{
    int V,E,r;
    int s,t,w;
    scanf("%d %d %d",&V,&E,&r);

    Graph G(V,E);
    _for(0,E){
        scanf("%d %d %d",&s,&t,&w);
        G.addEdge(s,t,w);
    }
    G.spfa(r);
    return 0;
}
