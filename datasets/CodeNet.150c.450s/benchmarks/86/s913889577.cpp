#include <iostream>
using namespace std;
#define BET 100

int main(int argc, char *argv[])
{
    int n, m, p, x, num, win, total, res;
    while (cin >> n >> m >> p, n | m | p) {
        total = res = 0;
        m--;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (i == m)
                win = x;
            total += x;
        }
        if (win != 0)
            res = total * BET * (100 - p) / win / 100;
        cout << res << endl;
    }
    return 0;
}