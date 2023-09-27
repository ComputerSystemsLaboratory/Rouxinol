#include <cstdio>
#include <iostream>
#include <algorithm>

#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    int n, a, b, c, x;
    while (cin >> n >> a >> b >> c >> x, n) {
        int d[100];
        rep(i, n) {
            cin >> d[i];
        }
        int j = 0, fl = 0;
        while (fl < 10001) {
            if (x == d[j]) {
                j++;
                if (j == n) {
                    break;
                }
            }
            x = (a * x + b) % c;
            fl++;
        }
        if (fl == 10001) { 
            puts("-1");
        } else {
            printf("%d\n", fl);
        }
    }
    return 0;
}