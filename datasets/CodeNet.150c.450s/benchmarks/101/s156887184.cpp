#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#include <stack>
#include <string>
#include <climits>
using namespace std;

#define MAX_N  100000
#define MAX_M  100000
#define MAX_Q  10000

int n, m, q, k, kind[MAX_N] = {};
queue<int> Q;

void bf(vector<vector<int> >& sns, int s)
{
    Q.push(s);
    while (!Q.empty()) {
        s = Q.front();
        Q.pop();
        kind[s] = k;
        for (int i = 0; i < sns[s].size(); i++) {
            if (!kind[sns[s][i]]) Q.push(sns[s][i]);
        }
    }
}

int main()
{
    cin >> n >> m;
    vector<vector<int> > sns(n);
    int s, d;
    while (m--) {
        cin >> s >> d;
        sns.at(s).push_back(d);
        sns.at(d).push_back(s);
    }
    k = 0;
    for (int s = 0; s < n; s++) {
        if (!kind[s]) {
            k++;
            bf(sns, s);
        }
    }
    cin >> q;
    while (q--) {
        cin >> s >> d;
        cout << (kind[s] == kind[d] ? "yes" : "no") << endl;
    }
    return 0;
}