#include <cstdio>

int main()
{
    long a, b;
    long m, n, temp;

    while (scanf("%ld %ld", &a, &b) != EOF) {
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }
        m = a;
        n = b;

        while (n != 0) {
            temp = n;
            n = m % n;
            m = temp;
        }

        printf("%ld %ld\n", m, a / m * b);
    }

    return 0;
}