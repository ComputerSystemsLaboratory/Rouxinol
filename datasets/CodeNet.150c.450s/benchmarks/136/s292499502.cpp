#include <cstdio>

int main()
{
        unsigned long a, b;

        while (scanf("%lu %lu", &a, &b) != EOF) {
                unsigned long max = (a > b) ? a : b,
                                          min = (a < b) ? a : b;
                while (min) {
                        int r = max % min;
                        max = min;
                        min = r;
                }
                unsigned long lcm = a * b / max;
                printf("%lu %lu\n", max, lcm);
        }

        return 0;
}