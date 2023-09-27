#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <utility>
#include <algorithm>
#include <functional>
#include <deque>
#define INF 1e9
#define MAX_V 10001
#define MAX_E 100001

using namespace std;

typedef long long ll;
typedef pair<int,int> P;

int parent[MAX_V];
int myrank[MAX_V];

void init(int n) {
    for (int i = 0; i < n; ++i) {
        parent[i] = i;
        myrank[i] = 0;
    }
}

int get_root(int i) {
    if (parent[i] == i)
        return i;
    else
        return parent[i] = get_root(parent[i]);
}

void unite(int x, int y) {
    int root_x = get_root(x);
    int root_y = get_root(y);
    if (root_x == root_y)
        return;
    if (myrank[root_x] > myrank[root_y]) {
        parent[root_y] = root_x;
    } else {
        parent[root_x] = root_y;
        if (myrank[root_x] == myrank[root_y])
            myrank[root_y]++;
    }
}

bool same(int x, int y) {
    return get_root(x) == get_root(y);
}

struct edge { int from, to, cost; };
edge es[MAX_E];

bool comp(edge e1, edge e2) {
    return e1.cost < e2.cost;
}

int main() {
    int V, E;
    cin >> V >> E;
    for (int i = 0; i < E; ++i) {
        int s, t, w;
        cin >> s >> t >> w;
        es[i] = edge{ s, t, w };
    }
    
    sort(es, es + E, comp); // cost が小さい順にソート
    init(V);
    int res = 0;
    for (int i = 0; i < E; ++i) {
        edge e = es[i];
        if (!same(e.from, e.to)) {
            unite(e.from, e.to);
            res += e.cost;
        }
    }
    
    cout << res << endl;
    
    return 0;
}

