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
ll inf = llmax / 2;

struct edge {
    int to, cost;
};

int V;
vector<edge> G[1000000];
ll d[1000000];
bool negative;

void bellmanFord(int s) {
    fill(d, d + V + 10, inf);
    d[s] = 0;
    negative = false;
    for (int i = 0; i < V; i++) {
        bool update = false;
        for (int j = 0; j < V; j++) {
            if (d[j] != inf) {
                for (int k = 0; k < G[j].size(); k++) {
                    edge e = G[j][k];
                    if (d[j] + e.cost < d[e.to]) {
                        d[e.to] = d[j] + e.cost;
                        update = true;
                    }
                }
            }
        }
        if (!update) {
            break;
        } else if (i == V - 1) {
            negative = true;
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
    bellmanFord(r);
    if (!negative) {
        for (int i = 0; i < V; i++) {
            if (d[i] == inf) {
                cout << "INF" << endl;
            } else {
                cout << d[i] << endl;
            }
        }
    } else {
        cout << "NEGATIVE CYCLE" << endl;
    }
}

