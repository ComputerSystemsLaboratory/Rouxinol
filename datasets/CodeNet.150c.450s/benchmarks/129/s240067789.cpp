#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int ROW = 100;
    const int COL = 100;
    int r, c;
    int t[ROW][COL];

    memset(t, 0, sizeof(t));

    cin >> r >> c;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> t[i][j];

    for(int i = 0; i < r; i++)
    {
        long s = 0;
        for(int j= 0; j < c; j++)
        {
            if(j > 0)
                cout << ' ';
            cout << t[i][j];
            s += t[i][j];
        }
        cout << ' ' << s << endl;
    }

    long long a = 0;
    for(int j = 0; j < c; j++)
    {
        long s = 0;
        for(int i = 0; i < r; i++)
        {
            s += t[i][j];
        }
        if(j > 0)
            cout << ' ';
        cout << s;
        a += s;
    }
    cout << ' ' << a << endl;

    return 0;
}