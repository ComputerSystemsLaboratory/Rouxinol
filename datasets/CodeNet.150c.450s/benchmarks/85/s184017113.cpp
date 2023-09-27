#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#include <climits>
using namespace std;

int mcm(vector<int>& p)
{
    vector<vector<int> > m(p.size() - 1, vector<int>(p.size() - 1));
    for (int i = 0; i < m.size(); i++) {
        m[i][i] = 0;
    }
/*
 * l == number of targets
 * i == left most of targets
 */
    for (int l = 2; l <= m.size(); l++) {
        for (int i = 0; i < m.size() - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                m[i][j] =
                    min(m[i][j],
                        m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1]);
            }
        }
    }
    return m[0][m.size() - 1];
}

int main()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i < n + 1; i++) {
        cin >> p.at(i - 1) >> p.at(i);
    }
    cout << mcm(p) << endl;
    return 0;
}