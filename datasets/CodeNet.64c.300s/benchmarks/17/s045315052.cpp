#include <cstdio>
#include <algorithm>

using namespace std;

int zeikomi(int n, int r)
{
    return n * (100 + r) / 100;
}

int main()
{
    for (;;) {
        int x, y, s;
        scanf("%d %d %d", &x, &y, &s);
        if (x == 0 && y == 0 && s == 0)
            break;

        int ans = 0;
        for (int i = 1; i < s; ++i)
            for (int j = 1; j < s; ++j)
                if (zeikomi(i, x) + zeikomi(j, x) == s)
                    ans = max(ans, zeikomi(i, y) + zeikomi(j, y));

        printf("%d\n", ans);
    }

    return 0;
}