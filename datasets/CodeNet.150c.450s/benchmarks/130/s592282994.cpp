#include <iostream>

using namespace std;

int main(void)
{
    u_int m, n;
    cin >> n >> m;

    u_int a[n][m], b[m];
    for (u_int i = 0; i < n; i++)
        for (u_int j = 0; j < m; j++)
            cin >> a[i][j];
    for (u_int i = 0; i < m; i++)
        cin >> b[i];

    for (u_int i = 0; i < n; i++) {
        u_int c = 0;
        for (u_int j = 0; j < m; j++)
            c += a[i][j] * b[j];
        cout << c << endl;
    }
        
    return 0;
}