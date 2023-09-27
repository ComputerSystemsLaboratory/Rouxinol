#include <iostream>
using namespace std;

int main ()
{
    int N;
    cin >> N;

    int M[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            M[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int u, k;
        cin >> u >> k;
        u--;

        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j > 0)
                cout << " ";
            cout << M[i][j];
        }
        cout << endl;
    }

    return 0;
}



