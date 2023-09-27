#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
using namespace std;

typedef long long ll;

#define MAX_V 100
#define INF int(1e9)

// g : ??°??????, V : g???????????°, s : ????????????????????????
int Prim (int g[MAX_V + 1][MAX_V + 1], int V, int s) {
    ll ret = 0, min_, nxtv, v = s, size_;
    // bool used[V] = {false}; // c++11??????
    bool used[V]; memset(used, 0, sizeof(used)); // c++11??\???
    vector<int> usedv;
    usedv.push_back(s);
    used[s] = true;

    while (usedv.size() < V) {
        min_ = INF;
        size_ = usedv.size();

        // ?????¨???????????????????????°?????????????????\?¶????????????????????°????????????¢???
        for (int i = 0; i < size_; ++i) {
            for (int j = 0; j < V; ++j) {
                if (usedv[i] == j) continue;
                if (!used[j] && min_ > g[usedv[i]][j]) {
                    min_ = g[usedv[i]][j];
                    v = j;
                }
            }
        }

        ret += min_;
        usedv.push_back(v);
        used[v] = true;
    }

    return ret;
}

int n, g[MAX_V + 1][MAX_V + 1];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> g[i][j];
            if (g[i][j] == -1) g[i][j] = INF;
        }
    }

    cout << Prim(g, n, 0) << endl;


    return 0;
}