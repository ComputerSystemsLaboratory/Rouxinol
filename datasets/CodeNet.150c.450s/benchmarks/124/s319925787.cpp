#include <iostream>
#include <utility>
#include <vector>
#include <climits>
using namespace std;

static const int MAX_N = 100;

void dijkstra(vector<vector<pair<int, int> > > way)
{
    int d[way.size()];
    bool on[way.size()];
    for (int i = 0; i < way.size(); i++) {
        d[i] = INT_MAX;
        on[i] = false;
    }
    d[0] = 0;
    while (1) {
//        cout << "d:";
//        for (int i = 0; i < way.size(); i++) {
//            cout << " " << d[i];
//        }
//        cout << endl;
        int u, minv = INT_MAX;
        for (int i = 0; i < way.size(); i++) {
            if (minv > d[i] && !on[i]) {
                minv = d[i];
                u = i;
            }
        }
        if (minv == INT_MAX) break;
        on[u] = true;
        for (auto itr = way.at(u).begin(); itr != way.at(u).end(); ++itr) {
            if (!on[itr->first]) {
                d[itr->first] = min(d[itr->first], d[u] + itr->second);
            }
        }
    }
    for (int i = 0; i < way.size(); i++) {
        cout << i << " " << d[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int> > > way(n);
    int k, c, u, v;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            way.at(u).push_back(make_pair(v, c));
        }
    }
    dijkstra(way);
    return 0;
}