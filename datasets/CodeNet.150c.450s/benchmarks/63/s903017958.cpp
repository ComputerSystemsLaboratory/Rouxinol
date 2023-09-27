#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <iomanip>
#include <numeric>
#include <tuple>
#include <bitset>
#define _USE_MATH_DEFINES
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> plglg;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlglglg;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
double pi = 3.141592653589793;
ll mod = 1000000007;
int intmax = 2147483647;
int intmin = -2147483648;
ll llmax = 9223372036854775807;
ll llmin = -9223372036854775807;

struct edge {
    int to, cost;
};

int V;
vector<edge> G[1000000];
ll d[1000000];

void dijkstra(int s) {
    priority_queue<pii, vector<pii>, greater<pii> > que;
    fill(d, d + V + 10, llmax);
    d[s] = 0;
    que.push(pii(0, s));

    while (!que.empty()) {
        pii p = que.top();
        que.pop();
        int v = p.second;
        if (d[v] < p.first) {
            continue;
        }
        for (int i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(pii(d[e.to], e.to));
            }
        }
    }
}

int main() {
    int E, r;
    cin >> V >> E >> r;
    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        edge e;
        e.to = t;
        e.cost = d;
        G[s].push_back(e);
    }
    dijkstra(r);
    for (int i = 0; i < V; i++) {
        if (d[i] == llmax) {
            cout << "INF" << endl;
        } else {
            cout << d[i] << endl;
        }
    }
}

