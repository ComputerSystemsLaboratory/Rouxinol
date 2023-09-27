#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n, a, b, c, x, y, i, num;
    const int MAX = 10001;
    while (cin >> n >> a >> b >> c >> x, n|a|b|c|x) {
        int ys[n];
        for (i = 0; i < n; ++i) {
            cin >> y;
            ys[i] = y;
        }
        for (i = 0, num = 0; i <= MAX; ++i) {
            if (ys[num] == x)
                num++;
            if (num == n)
                break;
            x = (a * x + b) % c;
        }
        if (i >= MAX)
            cout << -1 << endl;
        else
            cout << i << endl;
    }
    return 0;
}