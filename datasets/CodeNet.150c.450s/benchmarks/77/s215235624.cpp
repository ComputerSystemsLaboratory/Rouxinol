#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int,int> P;
typedef vector<pair<int,int> > VP;

int main ()
{
    int n;
    while (cin >> n) {
        if (n == 0) break;
        bool d[22][22];
        memset(d, false, sizeof(d));
        int c = n;
        while (c--) {
            int a, b;
            cin >> a >> b;
            d[a][b] = true;
        }
        int x = 10, y = 10;
        int t;
        cin >> t;
        for (int i = 0; i < t; i++) {
            int num;
            char str;
            cin >> str >> num;
            switch (str) {
            case 'N' :
                for (int i = 0; i < num; i++) {
                    ++y;
                    if (d[x][y]) {
                        d[x][y] = false, --n;
                    }
                }
                break;
            case 'E' :
                for (int i = 0; i < num; i++) {
                    ++x;
                    if (d[x][y]) {
                        d[x][y] = false, --n;
                    }
                }
                break;
            case 'S' :
                for (int i = 0; i < num; i++) {
                    --y;
                    if (d[x][y]) {
                        d[x][y] = false, --n;
                    }
                }
                break;
            case 'W' :
                for (int i = 0; i < num; i++) {
                    --x;
                    if (d[x][y]) {
                        d[x][y] = false, --n;
                    }
                }
                break;
            }
        }

        cout << (n == 0 ? "Yes" : "No" ) << endl;
    }

    return 0;
}