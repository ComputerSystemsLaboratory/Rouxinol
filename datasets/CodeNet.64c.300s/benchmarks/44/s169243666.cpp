#include <iostream>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int INF = 10000000;
const int MAX_V = 10;
int d[MAX_V][MAX_V];
int E;

void init() {
    REP(i, MAX_V) {
        REP(j, MAX_V) {
            if (i == j) d[i][j] = 0;
            else        d[i][j] = INF;
        }
    }
}

void make() {
    REP(i, E) {
        int u, v, c;
        cin >> u >> v >> c;
        d[u][v] = c; d[v][u] = c;
    }
}

void wf() {
    REP(k, MAX_V) {
        REP(i, MAX_V) {
            REP(j, MAX_V) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

void answer() {
    int town = 0, min_sum = INF;

    REP(i, MAX_V) {
        int row_sum = 0;
        REP(j, MAX_V) {
            if (d[i][j] < INF)
                row_sum += d[i][j];
        }

        //row_sum > 0 means i is not isolate
        if (row_sum > 0 && row_sum < min_sum) {
            min_sum = row_sum;
            town = i;
        }
    }

    cout << town << ' ' << min_sum << endl;
}

void solve() {
    while (true) {

        cin >> E;

        if (E == 0) break;

        init();

        make();

        wf();

        answer();
    }
}


int main() {
    solve();
    return 0;
}