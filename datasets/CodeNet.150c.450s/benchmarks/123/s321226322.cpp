#include <cstdio>

bool is_prime(int n) {
    if (n == 2) return true;

    if ((n & 1) == 0) {
        return false;
    }

    for (int i = 3; i*i <= n; i += 2)
        if (n % i == 0) {
            return false;
        }

    return true;
}

int main(int argc, char const *argv[])
{
    int n, count = 0;
    scanf("%d", &n);

    while (n-- > 0) {
        int i;
        scanf("%d", &i);
        if (is_prime(i))
            count++;
    }

    printf("%d\n", count);
    return 0;
}