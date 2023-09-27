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
#define _USE_MATH_DEFINES
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> plglg;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlglglg;
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
vector<int> G[1000000];
ll d[1000000];

void DFS(int n) {
    fill(d, d + V, llmax);
    queue<int> que;
    d[n] = 0;
    que.push(n);
    while (que.size() > 0) {
        int base = que.front();
        que.pop();
        int s = G[base].size();
        for (int i = 0; i < s; i++) {
            int to = G[base][i];
            if (d[to] == llmax) {
                d[to] = d[base] + 1;
                que.push(to);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    V = N;
    for (int i = 0; i < N; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int n;
            cin >> n;
            G[i].push_back(n - 1);
        }
    }
    DFS(0);
    for (int i = 0; i < N; i++) {
        if (d[i] == llmax) {
            d[i] = -1;
        }
        cout << i + 1 << " " << d[i] << endl;
    }
}

