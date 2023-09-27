#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int data[r+1][c+1];
    for (int i = 0; i <= c; i++)
        data[r][i] = 0;
    
    for (int i = 0; i < r; i++)
    {
        data[i][c] = 0;
        for (int j = 0; j < c; j++)
        {
            cin >> data[i][j];
            data[i][c] += data[i][j];
            data[r][j] += data[i][j];
        }
    }
    
    
    
    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (i == r) data[i][c] += data[i][j];
            if (j == c)
            {
                if (i == r)
                {
                    cout << data[i][j] / 2;    
                }
                else
                {
                    cout << data[i][j];
                }
            }
            else
            {
            cout << data[i][j] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}