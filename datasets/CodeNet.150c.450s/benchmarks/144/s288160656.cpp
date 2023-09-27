#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, l;
    cin >> n >> m >> l;

    vector<vector<long>> m1(n, vector<long>(m));
    vector<vector<long>> m2(m, vector<long>(l));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            m1[i][j] = x;
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < l; ++j) {
            int x;
            cin >> x;
            m2[i][j] = x;
        }
    }

    vector<vector<long>> r(n, vector<long>(l, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            for (int k = 0; k < m; ++k) {
                r[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            if (j != 0) {
                cout << ' ';
            }
            cout << r[i][j];
        }
        cout << endl;
    }
}