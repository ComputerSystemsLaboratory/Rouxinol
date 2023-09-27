#include <iostream>
#include <queue>
#include <limits>
using namespace std;

struct vec {
    int t, c;
    vec(int to, int cost):t(to),c(cost){}
    bool operator>(const vec &r)const{return t>r.t;}
};
vector<vec> adj[100];
int d[100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) d[i]=numeric_limits<int>::max();
    for(int i=0; i<n; i++) {
        int u,k;
        cin>>u>>k;
        adj[u].reserve(k);
        for(int j=0; j<k; j++) {
            int v,c;
            cin>>v>>c;
            adj[u].push_back(vec(v,c));
        }
    }
    priority_queue<vec, vector<vec>, greater<vec> >q;
    q.push(vec(0,0));
    while(!q.empty()) {
        vec e=q.top();
        q.pop();
        if(d[e.t]<=e.c) continue;
        d[e.t]=e.c;
        for(vector<vec>::iterator it=adj[e.t].begin(); it!=adj[e.t].end(); ++it) q.push(vec(it->t, e.c+it->c));
    }
    for(int i=0; i<n; i++) cout<<i<<' '<<d[i]<<'\n';
    return 0;
}