#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define INF 999999999
using namespace std;
typedef pair<int, int> pii;

struct Edge {
        int to, cost;
        Edge(int a, int b) {
                to = a;
                cost = b;
         }
};

int main() {
        int V, E, r;
        cin >> V >> E >> r;
        
        vector<Edge> Graph[100001];
        priority_queue<pii, vector<pii>, greater<pii> > q; 
        int dist[100001];
        
        int s,t,d;
        rep(i,0,E) {
                cin >> s >> t >> d;       
                Graph[s].push_back(Edge(t,d));
         }
         
         /*rep(i,0,V) {
                vector<Edge>::iterator it = Graph[i].begin();
                while(it != Graph[i].end()) {
                        cout << it->to << " ";
                        cout << it->cost << endl;
                        it++;
                  }
          }*/
                        
         
         fill(dist,dist+V,INF);
         dist[r] = 0;
         q.push(pii(0,r));
         
         while(!q.empty()) {
                pii p = q.top(); q.pop();
                int v = p.second;
                if(dist[v] < p.first) continue;
                for(int i=0; i < Graph[v].size(); i++) {
                        Edge e = Graph[v][i];
                        if(dist[e.to] > dist[v] + e.cost) {
                                dist[e.to] = dist[v] + e.cost;
                                q.push(pii(dist[e.to], e.to));
                          }
                  }
          }
          
          rep(i,0,V) {
                if(dist[i] == INF) cout << "INF" << endl;
                else cout << dist[i] << endl;
           }
          return 0;
}