#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int ans[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ans[i][j] = 0;
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int tmp;
            cin >> tmp;
            ans[u-1][tmp-1] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n-1) cout << ans[i][j];
            else cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}