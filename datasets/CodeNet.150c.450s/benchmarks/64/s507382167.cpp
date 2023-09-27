#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int a[20];
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; ++i) {
        int m;
        scanf("%d", &m);

        bool ok = false;
        for (int i = 0; i < (1 << n); ++i) {
            int s = 0;
            for (int j = 0; j < n; ++j)
                s += ((i >> j) & 1) * a[j];
            if (s == m)
                ok = true;
        }

        if (ok)
            puts("yes");
        else
            puts("no");
    }

    return 0;
}