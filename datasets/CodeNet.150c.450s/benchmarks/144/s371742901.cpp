#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;
using lli = long long int;

int main()
{
    int n, m, l;
    cin >> n >> m >>l;

    vector<vector<lli>> A(n, vector<lli>(m, 0));
    vector<vector<lli>> B(m, vector<lli>(l, 0));

    //??\???
    for (int y = 0; y < n; ++y)
    {
        for (int x = 0; x < m; ++x)
            cin >> A[y][x];
        cin.ignore();
    }
    for (int y = 0; y < m; ++y)
    {
        for (int x = 0; x < l; ++x)
            cin >> B[y][x];
        cin.ignore();
    }

    vector<vector<lli>> C(n, vector<lli>(l, 0));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < l; ++j)
            for (int k = 0; k < m; ++k)
                C[i][j] += A[i][k] * B[k][j];

    
    for (int y = 0; y < n; ++y)
        for (int x = 0; x < l; ++x)
            cout << C[y][x] << (x != l - 1 ? ' ' : '\n');

    return 0;
}