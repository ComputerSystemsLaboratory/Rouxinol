#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;
int n, m;
vector<int> c;
vector<vector<int> > T;
int main() {
    cin >> n >> m;
    c.resize(m+1);
    for (int i = 0; i < m; ++i) {
        cin >> c[i];
    }
    T.resize(m);
    for (int j = 0; j < m; ++j) {
        T[j].resize(n+1);
    }

    for (int k = 0; k < m; ++k) {
        T[k][0] = 0;
    }
    for (int j = 0; j <= n; ++j) {
        for (int i = 0; i < m; ++i) {
            int pp;
            if (j==0) pp = 0;
            else if(j - c[i] < 0) pp = INT_MAX;
            else pp = T[i][j-c[i]]+1;
            int qq;
            if(i < 1) qq = INT_MAX;
            else qq = T[i-1][j];
            T[i][j] = min(qq, pp);
        }
    }
    cout << T[m-1][n] << endl;



    return 0;
}

