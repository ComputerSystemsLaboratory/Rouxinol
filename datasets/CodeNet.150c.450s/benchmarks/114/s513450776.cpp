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
vector< vector<int> > Adj(MAX, vector<int>(MAX, INF));
vector<int> color(MAX, WHITE);
vector<int> d(MAX, INF);
vector<int> p(MAX, -1);
int n;
int total_cost = 0;

/* function */
void prim();

/* main */
int main() {
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            if (a != -1)
                Adj[i][j] = a;
        }
    }

    prim();

    cout << total_cost << '\n';

}

void prim() {

    int u;
    int min_cost = INF;
    d[0] = 0;
    p[0] = -1;

    while (1) {

        u = -1;
        min_cost = INF;
        for (int i = 0; i < n; i++) {
            if (color[i] != BLACK && d[i] < min_cost) {
                u = i;
                min_cost = d[i];
            }
        }
        if (min_cost == INF) {
            break;
        }

        color[u] = BLACK;
        total_cost += min_cost;

        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && Adj[u][v] != INF) {
                // if (d[u] + Adj[u][v] < d[v]) {
                if (Adj[u][v] < d[v]) {
                    p[v] = u;
                    // d[v] = Adj[u][v] + d[u];
                    d[v] = Adj[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }

}

