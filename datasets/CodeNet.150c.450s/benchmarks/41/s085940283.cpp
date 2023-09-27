#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#include <climits>
using namespace std;

void floyd(vector<vector<long long> >& d)
{
    for (int k = 0; k < d.size(); k++) {
        for (int i = 0; i < d.size(); i++) {
            if (LLONG_MAX == d[i][k]) continue;
            for (int j = 0; j < d.size(); j++) {
                if (LLONG_MAX == d[k][j]) continue;
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<long long> > d(v, vector<long long>(v, LLONG_MAX));
    int s, t;
    for (int i = 0; i < v; i++) d[i][i] = 0;
    for (int i = 0; i < e; i++) {
        cin >> s >> t;
        cin >> d[s][t];
    }
    floyd(d);

    // check negative cycle
    for (int i = 0; i < v; i++) {
        if (d[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for (int i = 0; i < v; i++) {
        for (auto itr = d.at(i).begin(); itr != d.at(i).end(); ++itr) {
            if (itr != d.at(i).begin()) cout << " ";
            if (LLONG_MAX == *itr) cout << "INF";
            else cout << *itr;
        }
        cout << endl;
    }
    return 0;
}