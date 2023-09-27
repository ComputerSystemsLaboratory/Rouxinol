#include <iostream>

using namespace std;

const int dx[] = {0, -1, 0, 1};
const int dy[] = {-1, 0, 1, 0};

int dir(char ch) 
{
    int ret;

    if (ch == 'N')
        ret = 2;
    else if (ch == 'E')
        ret = 3;
    else if (ch == 'S')
        ret = 0;
    else if (ch == 'W')
        ret = 1;

    return ret;
}


int main()
{
    int n;

    while (cin >> n, n) {
        bool map[22][22];
        int x, y, m;

        for (int i = 0; i <= 20; i++)
            for (int j = 0; j <= 20; j++) 
                map[i][j] = false;

        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            map[y][x] = true;
        }

        x = y = 10;
        cin >> m;
        for (int i = 0; i < m; i++) {
            char d;
            int l;

            cin >> d >> l;
            for (int j = 0; j < l; j++) {
                x += dx[dir(d)];
                y += dy[dir(d)];

                if (map[y][x]) {
                    map[y][x] = false;
                    n--;
                }
            }
        }

        if (n == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}