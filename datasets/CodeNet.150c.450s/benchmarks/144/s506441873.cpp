#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int N = 100;
    const int M = 100;
    const int L = 100;

    int a[N][M];
    int b[M][L];
    long c[N][L];

    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));

    int n, m, l;
    cin >> n >> m >> l;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < l; j++)
        {
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < l; j++)
        {
            long s = 0;
            for(int k = 0; k < m; k++)
            {
                s += a[i][k]*b[k][j];
            }
            c[i][j] = s;
            if(j > 0)
                cout << ' ';
            cout << c[i][j];
        }
        cout << endl;
    }

    return 0;
}