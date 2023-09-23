#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int* A;
    int* b;

    cin >> n >> m;
    A = new int[n*m];
    b = new int[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[(i * m) + j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int* ret;
    ret = new int[n];

    for (int i = 0; i < n; i++)
    {
        ret[i] = 0;
        for (int j = 0; j < m; j++)
        {
            ret[i] += b[j] * A[(i * m) + j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ret[i] << endl;
    }

    delete A;
    delete b;
    delete ret;

    cin >> n;
}


