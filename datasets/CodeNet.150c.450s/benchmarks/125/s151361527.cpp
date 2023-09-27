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
int st[1000000];
int en[1000000];
int t;

void DFS(int n) {
    t++;
    st[n] = t;
    int s = G[n].size();
    for (int i = 0; i < s; i++) {
        if (st[G[n][i]] == intmax) {
            DFS(G[n][i]);
        }
    }
    t++;
    en[n] = t;
}

int main() {
    int N;
    cin >> N;
    V = N;
    fill(st, st + V + 10, intmax);
    fill(en, en + V + 10, intmax);
    t = 0;
    for (int i = 0; i < N; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int n;
            cin >> n;
            G[i].push_back(n - 1);
        }
    }
    for (int i = 0; i < N; i++) {
        if (st[i] == intmax) {
            DFS(i);
        }
    }
    for (int i = 0; i < N; i++) {
        cout << i + 1 << " " << st[i] << " " << en[i] << endl;
    }
}

