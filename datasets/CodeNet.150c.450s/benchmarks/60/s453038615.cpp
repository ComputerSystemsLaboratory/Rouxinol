#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#include <string>
#include <climits>
using namespace std;

#define MAX_N 101


int main()
{
    vector<vector<int> > A(MAX_N, vector<int>(MAX_N, 0));
    int i, k, u, v, n;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> u >> k;
        while (k--) {
            cin >> v;
            A[u][v] += 1;
        }
    }
    for (i = 1; i <= n; i++) {
        for (k = 1; k <= n; k++) {
            if (k > 1) cout << " ";
            cout << A[i][k];
        }
        cout << endl;
    }
    return 0;
}