#include<iostream>
#include<vector>
#include<queue>
#include<utility>

#define VMAX 10000
using namespace std;
typedef pair<long long, pair<int, int>> pli;
vector<pli> edge[VMAX];
int color[VMAX];

long long Prim(int n, int s){
    priority_queue<pli, vector<pli>, greater<pli>> q;
    for(int i=0; i<n; ++i){
        color[i] = 0;
    }
    for(int i=0; i<edge[s].size(); ++i){
        q.push(edge[s][i]);
    }
    color[s] = 1;
    int u, v, w;
    long long res = 0;
    while(!q.empty()){
        w = q.top().first;
        v = q.top().second.first;
        u = q.top().second.second;
        q.pop();
        if(!color[v]){
            color[v] = 1;
            res += w;
            for(int i=0; i<edge[v].size(); ++i){
                q.push(edge[v][i]);
            }
        }
    }
    return res;
}

int main(){
    int v, e, w, s, t;
    cin>>v>>e;
    for(int i=0; i<e; ++i){
        cin>>s>>t>>w;
        edge[s].push_back(make_pair(w, make_pair(t, s)));
        edge[t].push_back(make_pair(w, make_pair(s, t)));
    }

    long long res = Prim(v, 0);
    cout<<res<<endl;

    return 0;
}
