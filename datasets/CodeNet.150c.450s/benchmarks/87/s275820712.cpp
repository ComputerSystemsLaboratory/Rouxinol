#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <vector>
using namespace std;

#define ll long long int

int cell[5][10] = {};

bool tune()
{
    int f = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (cell[i][j] == 0)
            {
                for (int k = j; k < 10; k++)
                {
                    if (cell[i][k] != 0)
                    {
                        cell[i][j] = cell[i][k];
                        cell[i][k] = 0;
                        f = true;
                        break;
                    }
                }
            }
        }
    }
    return f;
}

int main()
{
    int h;

    while (cin >> h)
    {
        if (h == 0)
            break;
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cell[i][j] = 0;
            }
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> cell[j][i];
            }
        }
        for (int i = 0; i < 5; i++)
        {
            reverse(cell[i], cell[i] + h);
        }
        while (1)
        {
            for (int i = 0; i < h; i++)
            {
                bool row[3] = {};
                for (int j = 0; j < 3; j++)
                {
                    if (cell[j][i] == cell[j + 1][i] && cell[j + 2][i] == cell[j + 1][i])
                        row[j] = true;
                }
                for (int j = 0; j < 3; j++)
                {
                    if (row[j])
                    {
                        for (int k = 0; k < 3; k++)
                        {
                            sum += cell[j + k][i];
                            cell[j + k][i] = 0;
                        }
                    }
                }
            }
            if (!tune())
                break;
        }
        cout << sum << endl;
    }
}

