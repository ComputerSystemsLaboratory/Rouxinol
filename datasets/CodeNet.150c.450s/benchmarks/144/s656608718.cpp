#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l;
    long t;
    vector<vector<long> > a, b;

    cin >> n >> m >> l;

    for (int j = 0; j < n; ++j) {
        a.push_back(vector<long>());
        for (int i = 0; i < m; ++i) {
            cin >> t;
            a[j].push_back(t);
        }
    }

    for (int j = 0; j < m; ++j) {
        b.push_back(vector<long>());
        for (int i = 0; i < l; ++i) {
            cin >> t;
            b[j].push_back(t);
        }
    }

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < l; ++i) {
            t = 0;
            for (int k = 0; k < m; ++k) {
                t += a[j][k] * b[k][i];
            }
            cout << t;
            if (i < l - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }


    return 0;
}