#include<bits/stdc++.h>
using namespace std;

const int M = 1000000007;

vector<vector<int>> adj;


struct Point {
    int id;
    // double x, y;
    Point() {}
    Point(int id) : id(id) {}
    // Point(double x, double y): x(x), y(y) {}
    int distance(const Point &p) const {
        return adj[id][p.id] == -1 ? M : adj[id][p.id];
    }
};

int calc_mst(const vector<Point>& points) {
    int n = points.size();
    vector<int> dist(n, M);
    vector<bool> visited(n);
    int p = 0;
    int res = 0;
    while (true) {
        visited[p] = true;
        int mind = M, minj = -1;
        for (int j = 0; j < n; ++j) {
            if (visited[j]) continue;
            dist[j] = min(dist[j], points[p].distance(points[j]));
            if (mind > dist[j]) {
                mind = dist[j];
                minj = j;
            }
        }
        if (minj == -1) break;
        p = minj;
        res += mind;
    }
    return res;
}

int main(int argc, char **argv) {
    int n;
    cin >> n;
    adj = vector<vector<int>>(n, vector<int>(n));
    vector<Point> p(n);
    for (int i = 0; i < n; ++i) {
        p[i] = Point(i);
        for (int j = 0; j < n; ++j) {
            cin >> adj[i][j];
        }
    }
    cout << calc_mst(p) << '\n';
    return 0;
}

