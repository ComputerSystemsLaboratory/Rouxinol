#include <algorithm>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

#define ll long long

struct node {
    int num, dist;
    node(int n, int d) {
        num = n;
        dist = d;
    }

    bool operator<(const node &right) const {
        return dist >= right.dist;
    }
};

int main() {
    int V, E, r;
    cin >> V >> E >> r;
    vector<vector<int>> ro(V);
    vector<vector<int>> di(V);
    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        ro[s].push_back(t);
        di[s].push_back(d);
    }
    vector<int> dist(V, INT_MAX);
    vector<bool> c(V, false);
    priority_queue<node> pq;
    pq.push(node(r, 0));
    dist[r] = 0;
    while (pq.size() > 0) {
        auto n = pq.top();
        pq.pop();
        if (!c[n.num]) {
            c[n.num] = true;
            for (int i = 0; i < ro[n.num].size(); i++) {
                if (dist[ro[n.num][i]] > n.dist + di[n.num][i]) {
                    pq.push(node(ro[n.num][i], n.dist + di[n.num][i]));
                    dist[ro[n.num][i]] = n.dist + di[n.num][i];
                }
            }
        }
    }
    for (int i : dist) {
        if (i == INT_MAX) {
            cout << "INF" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}