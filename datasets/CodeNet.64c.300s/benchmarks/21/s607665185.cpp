#include <cstdio>

int main()
{
    int a, b, c, d, e, f;
    double x, y;

    while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
        x = (double)(e * c - b * f) / (a * e - b * d);
        y = (double)(a * f - d * c) / (a * e - b * d);

        printf("%.3f %.3f\n", x == -0 ? 0 : x, y == -0 ? 0 : y);
    }

    return 0;
}