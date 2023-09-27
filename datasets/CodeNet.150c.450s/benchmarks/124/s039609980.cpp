#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <string>
#include <cmath>
#include <iomanip>
#include <queue>
#include <list>
#include <stack>
#include <cctype>
#include <cmath>

using namespace std;

/* typedef */

typedef long long ll;

/* constant */

const int INF = 1 << 30;
const int MAX = 100;
const int mod = 1000000007;
const double pi = 3.141592653589;

const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;

/* global variables */
vector< vector<pair<int, int> > > Adj(MAX, vector<pair<int, int> >());
vector<int> color(MAX, WHITE);
vector<int> d(MAX, INF);
vector<int> p(MAX, -1);
int n;

/* function */
void dijkstra();

/* main */
int main() {
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k; cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c;
            cin >> v >> c;
            Adj[u].push_back(make_pair(v, c));
        }
    }

    dijkstra();

    for (int i = 0; i < n; i++ ) {
        cout << i << ' ' << d[i] << '\n';
    }
   

}

void dijkstra() {

    pair<int, int> p1;
    d[0] = 0;
    p[0] = -1;

    priority_queue<pair<int, int> > PQ;
    PQ.push(make_pair(0, 0));

    while (!PQ.empty()) {

        p1 = PQ.top(); PQ.pop();
        int u = p1.second;
        color[u] = BLACK;

        if ( d[u] < p1.first * (-1) ) continue;

        for (auto p2 : Adj[u]) {

            int v = p2.first;
            int cost = p2.second;

            if (color[v] != BLACK) {
                if (d[u] + cost < d[v]) {
                    p[v] = u;
                    d[v] = d[u] + cost;
                    color[v] = GRAY;
                    PQ.push(make_pair(-d[v], v));
                }
            }
        }
    }

}

