#include <iostream>

using namespace std;

int main()
{
    int n, m, l;
    int A[100][100] = {};
    int B[100][100] = {};
    cin >> n >> m >> l;
    // read matrix A
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < m; ++col)
        {
            cin >> A[row][col];
        }
    }

    // read matrix B
    for (int row = 0; row < m; ++row)
    {
        for (int col = 0; col < l; ++col)
        {
            cin >> B[row][col];
        }
    }

    // calc prodct AB
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < l; ++col)
        {
            long long val = 0;
            for (int i = 0; i < m; ++i)
            {
                val += A[row][i] * B[i][col];
            }
            cout << (col == 0 ? "" : " ") << val;
        }
        cout << endl;
    }
}
