#include <cstdio>

using namespace std;

int main(void) {

    int N;
    scanf("%d", &N);

    int d = -1e9, b;
    scanf("%d", &b);
    for (int i = 0, r; i < N - 1; ++i) {
        scanf("%d", &r);
        if (r - b > d)
            d = r - b;
        if (r < b)
            b = r;
    }

    printf("%d\n", d);

    return 0;
}