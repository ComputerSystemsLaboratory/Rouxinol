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

#define MAX_N 101

int n;
vector<vector<int> > A(MAX_N, vector<int>(MAX_N, 0));
queue<int> Q;
int d[MAX_N];

int main()
{
    int i, u, k, v;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> u >> k;
        while (k--) {
            cin >> v;
            A[u][v]++;
        }
        d[i] = -1;
    }
    d[1] = 0;
    Q.push(1);
    while (!Q.empty()) {
        u = Q.front();
        Q.pop();
        for (i = 1; i <= n; i++) {
            if (A[u][i] && d[i] == -1) {
                d[i] = d[u] + 1;
                Q.push(i);
            }
        }
    }
    for (i = 1; i <= n; i++)
        cout << i << " " << d[i] << endl;
    return 0;
}