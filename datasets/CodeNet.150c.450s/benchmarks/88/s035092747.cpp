#include <cstdio>

int comp(int h1, int w1, int h2, int w2)
{
    if (h1 * h1 + w1 * w1 < h2 * h2 + w2 * w2) {
        return -1;
    } else if (h1 * h1 + w1 * w1 == h2 * h2 + w2 * w2) {
        if (h1 < h2)
            return -1;
        else if (h1 == h2)
            return 0;
        else
            return 1;
    } else {
        return 1;
    }
}

int main()
{
    for (;;) {
        int h, w;
        scanf("%d %d", &h, &w);
        if (h == 0 && w == 0)
            break;

        int mh = 100, mw = 100;
        for (int y = 1; y < 150; ++y) {
            for (int x = y + 1; x < 150; ++x) {
                if (comp(h, w, y, x) < 0 && comp(y, x, mh, mw) < 0) {
                    mh = y;
                    mw = x;
                }
           }
        }

        printf("%d %d\n", mh, mw);
    }

    return 0;
}