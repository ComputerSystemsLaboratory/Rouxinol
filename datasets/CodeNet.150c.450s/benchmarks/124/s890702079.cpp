#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define INF (10000001)

typedef pair<int, int> Edge;

int main()
{
    priority_queue<Edge,vector<Edge>,greater<Edge> > pq;
    vector<vector<Edge> > e;
    vector<int> d;
    Edge etemp;
    int n,u,k,v,c;
    cin >> n;
    e.resize(n);
    d.resize(n);
    for(int i=0; i<n; ++i) {
        cin >> u >> k;
        for(int j=0; j<k; ++j) {
            cin >> v >> c;
            e[u].push_back(Edge{c,v});
        }
        d[u]=INF;
    }

    d[0]=0;
    for(auto x : e[0]) {
        pq.push(x);
    }
    while(!pq.empty()) {
        etemp=pq.top(); pq.pop();
        v=etemp.second;
        c=etemp.first;
        if(d[v]<c) continue;
        d[v]=c;
        for(auto x : e[v]) {
            if(d[x.second]<=c+x.first) continue;
            pq.push(Edge{c+x.first,x.second});
        }
    }
    for(int i=0; i<n; ++i) {
        cout << i << " " << d[i] << endl;
    }
    return 0;
}