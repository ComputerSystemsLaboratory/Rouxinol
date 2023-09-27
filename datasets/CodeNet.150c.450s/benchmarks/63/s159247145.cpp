#include<iostream>
#include<climits>
#include<queue>
#include<vector>
using namespace std;

const int MAX = 100000;
const int inf = INT_MAX;
int V,E,r;
vector< pair<int,int> > g[MAX];
int cost[MAX];
bool visit[MAX];

void dijkstra() {
    fill_n(cost,V,inf);
    fill_n(visit,V,false);
    cost[r] = 0;

    priority_queue< pair<int,int> , vector< pair<int,int> >, greater< pair<int, int> > > q;
    q.push(make_pair(0,r));
    while(!q.empty()) {
        int x=q.top().second;
        q.pop();
        visit[x] = true;
        for(int i=0; i<g[x].size(); i++) {
            int y = g[x][i].first, z = g[x][i].second;
            if(!visit[y]) {
                if(cost[y] > cost[x] + z) {
                    cost[y] = cost[x] + z;
                    q.push(make_pair(cost[y],y));
                }
            }
        }
    }
}

int main() {
    int s,t,d;
    cin >> V >> E >> r;
    for(int i=0; i<E; i++) {
        cin >> s >> t >> d;
        g[s].push_back(make_pair(t,d));
    }
    dijkstra();

    for(int i=0; i<V; i++) {
        if(visit[i]) cout << cost[i] << endl;
        else cout << "INF" << endl;
    }

    return 0;
}

