#include <cstdio>

const int INF = 1000000002;

int main()
{
    int N;
    scanf("%d", &N);

    int sum = -1;
    int low = INF;
    int high = 0;
    int more_low = INF;
    for (int i = 0; i < N; ++i)
    {
        int r;
        scanf("%d", &r);
        if (low <= high && r > high) {
            high = r;
        }
        if (r - more_low > sum) {
            low = more_low;
            high = r;
        }
        if (r < low) {
            if (low == INF)
                low = r;
            if (r < more_low)
                more_low = r;
        }
        sum = high - low;
    }

    printf("%d\n", sum);

    return 0;
}