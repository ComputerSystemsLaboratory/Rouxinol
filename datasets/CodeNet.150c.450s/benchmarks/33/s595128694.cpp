#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    while (true) {
        int x;
        int y;
        int s;
        scanf("%d %d %d", &x, &y, &s);
        if (x == 0 && y == 0 && s == 0) {
            break;
        }

        auto f = [](int n, int y) { return n * (100 + y) / 100; };
        int r = -1;
        for (int i = 1; i < s; ++i) {
            for (int j = 1; j < s; ++j) {
                if (f(i, x) + f(j, x) == s) {
                    r = max(r, f(i, y) + f(j, y));
                }
            }
        }
        printf("%d\n", r);
    }
}