#include <iostream>

using namespace std;

bool table[21][21];

int main()
{
    int n;
    while (cin >> n, n) {
        // prepare
        fill_n((bool *)table, 21*21, false);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            table[y][x] = true;
        }

        // search
        int m;
        cin >> m;
        int x = 10, y = 10;
        for (int i = 0; i < m; i++) {
            char d;
            int l;
            cin >> d >> l;
            int dx, dy;
            switch(d){
                case 'N':
                    dx = 0;
                    dy = 1;
                break;
                case 'E':
                    dx = 1;
                    dy = 0;
                break;
                case 'W':
                    dx = -1;
                    dy = 0;
                break;
                case 'S':
                    dx = 0;
                    dy = -1;
                break;
            }
            for (int i = 1; i <= l; i++) {
                x += dx;
                y += dy;
                table[y][x] = false;
            }
        }

        // output
        bool yes = true;
        for (int j = 0; j < 21; j++) {
            for (int i = 0; i < 21; i++) {
                yes = yes && !table[j][i];
            }
        }
        if (yes) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}