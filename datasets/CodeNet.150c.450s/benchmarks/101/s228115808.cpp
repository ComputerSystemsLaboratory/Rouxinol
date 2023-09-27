#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

using Graph = vector<int>;
int main() {
    int n, m;
    cin >> n >> m;
    vector<Graph>g(n);
    vector<int> color(n, -1);
    for (int i=0; i < m; i++) {
        int s, t;
        cin >> s >> t;
        g[s].emplace_back(t);
        g[t].emplace_back(s);
    }

    int num = 0;
    for (int i=0; i<n; i++) {
        num++;
        queue<int> que;
        if (color[i] != -1) {
            continue;
        }

        que.push(i);
        while(!que.empty()) {
            int s = que.front();
            que.pop();
            Graph G = g[s];
            for (int j=0; j<G.size(); j++) {
                int n = G[j];
                if (color[n] != -1) {
                    continue;
                }

                color[n] = num;
                que.push(n);
            }
        }
    }

    int q;
    cin >> q;
    for (int i=0; i < q; i++) {
        int s, t;
        cin >> s >> t;


        if (color[s] == color[t] && color[s] != -1) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}

