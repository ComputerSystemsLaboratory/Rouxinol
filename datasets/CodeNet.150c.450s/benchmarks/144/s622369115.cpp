#include <iostream>
#include <vector>
using namespace std;

static inline vector<vector<long>> read(vector<vector<long>> v) {
    for (auto &x: v)
        for (long &y : x)
            cin >> y;
    return move(v);
}

int main(void)
{
    long n, m, l;
    cin >> n >> m >> l;
    vector<vector<long>> a(n, vector<long>(m));
    vector<vector<long>> b(m, vector<long>(l));
    a = read(move(a));
    b = read(move(b));

    for (long i = 0; i < n; i++) {
        for (long j = 0; j < l; j++) {
            long sum = 0;
            for (long k = 0; k < m; k++)
                sum += a[i][k] * b[k][j];
            if (j)
                cout << " ";
            cout << sum;
        }
        cout << endl;
    }

    return 0;
}

