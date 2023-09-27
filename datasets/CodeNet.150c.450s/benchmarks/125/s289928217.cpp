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

int n, t;
vector<vector<int> > A(MAX_N, vector<int>(MAX_N, 0));
stack<int> S;
int d[MAX_N] = {};
int f[MAX_N] = {};

void df(int e)
{
    d[e] = t++;
    for (int i = 1; i <= n; i++) {
        if (A[e][i] && !d[i]) df(i);
    }
    f[e] = t++;
}

int main()
{
    int i, u, k, v;
    cin >> n;
    for (i = 0; i <= n; i++) A[0][i]++;
    for (i = 1; i <= n; i++) {
        cin >> u >> k;
        while (k--) {
            cin >> v;
            A[u][v]++;
        }
    }
    t = 0;
    df(0);
    for (i = 1; i <= n; i++)
        cout << i << " " << d[i] << " " << f[i] << endl;
    return 0;
}