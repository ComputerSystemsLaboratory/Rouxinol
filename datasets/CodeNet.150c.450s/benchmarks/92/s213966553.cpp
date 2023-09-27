#include <cstdio>

int main()
{
        unsigned int a, b, sum;
        unsigned int digit;

        while (scanf("%u %u", &a, &b) != EOF) {
                sum = a + b;
                digit = 0;
                while (sum) {
                        sum /= 10;
                        digit++;
                }
                printf("%u\n", digit);
        }

        return 0;
}