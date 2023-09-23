#include <iostream>
using namespace std;

int main()
{

    int r, c;
    int row[101], row_max[101];
    for (int i = 0; i < 101; i++)
    {
        row[i] = 0;
        row_max[i] = 0;
    }

    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        int tmp = 0;
        for (int j = 0; j < c; j++)
        {
            cin >> row[j];
            tmp += row[j];
        }
        row[c] = tmp;

        for (int j = 0; j <= c; j++)
        {
            cout << row[j];
            if (j != c)
            {
                cout << ' ';
            }
        }
        cout << endl;

        for (int j = 0; j <= c; j++)
        {
            row_max[j] += row[j];
        }
    }

    for (int j = 0; j <= c; j++)
    {
        cout << row_max[j];
        if (j != c)
        {
            cout << ' ';
        }
    }
    cout << endl;
}

