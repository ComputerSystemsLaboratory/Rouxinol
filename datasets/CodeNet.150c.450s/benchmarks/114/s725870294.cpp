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
#define _USE_MATH_DEFINES
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
double pi = 3.141592653589793;
ll mod = 1000000007;
int intmax = 2147483647;
int intmin = -2147483648;
ll llmax = 9223372036854775807;
ll llmin = -9223372036854775808;

struct unionFind {
    vector<int> data;
    unionFind(int size) : data(size, -1) {}
    
    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x != y) {
            if(data[y] < data[x]) {
                swap(x, y);
            }
            data[x] += data[y];
            data[y] = x;
        }
        return x != y;
    }

    bool same(int x, int y) {
        return root(x) == root(y);
    }

    int root(int x) {
        return (data[x] < 0) ? x : data[x] = root(data[x]);
    }

    int rank(int x) {
        return -data[root(x)];
    }
};

struct edge {
    int from, to, cost;
};

bool asc (const edge &e, const edge &f) {
    return (e.cost != f.cost) ? e.cost < f.cost : (e.from != f.from ? e.from < f.from : e.to < f.to);
}

int mat[200][200];

int main() {
    int N;
    cin >> N;
    vector<edge> G;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (mat[i][j] != -1) {
                edge e;
                e.from = i;
                e.to = j;
                e.cost = mat[i][j];
                G.push_back(e);
            }
        }
    }
    sort(G.begin(), G.end(), asc);
    int ans = 0;
    int num = 0;
    unionFind u(N);
    for (int i = 0; i < G.size(); i++) {
        if (u.root(G[i].from) != u.root(G[i].to)) {
            u.unite(G[i].from, G[i].to);
            ans += G[i].cost;
            num++;
        }
        if (num == N - 1) {
            break;
        }
    }
    cout << ans << endl;
}

