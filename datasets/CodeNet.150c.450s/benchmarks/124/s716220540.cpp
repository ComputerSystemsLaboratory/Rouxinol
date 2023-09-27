#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct Edge {
    int d, i, j;
    Edge(int d_, int i_, int j_) : d(d_), i(i_), j(j_) {}
    bool operator< (const Edge& right) const{
        return d > right.d;
    }
};
void calc(int t, vector<vector<int> >& G, vector<int>& distance){
    int new_black = t;
    priority_queue<Edge> temp;
    for (int i = 1; i < G.size(); i++) {
        for (int j = 0; j < G.size(); j++) {
            if (distance[j] != -1) continue;
            int dis = G[new_black][j] + distance[new_black];
            temp.push(Edge(dis, new_black, j));
        }
        while (distance[temp.top().j] != -1) temp.pop();
        distance[temp.top().j] = temp.top().d;
        new_black = temp.top().j;
        temp.pop();
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > G(n, vector<int>(n, 1e8));
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int c, v;
            cin >> c >> v;
            G[u][c] = v;
        }
    }

    vector<int> distance(n, -1);
    distance[0] = 0;
    calc(0, G, distance);
    for (int i = 0; i < n; i++) {
        cout << i << " " << distance[i] << endl;
    }
    return 0;
}

