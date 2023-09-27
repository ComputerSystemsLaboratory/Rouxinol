#include <cstdio>

using namespace std;

size_t num_digits(int n) {
    size_t k=1;
    while (n /= 10) ++k;

    return k;
}

int main() {
    while (true) {
        int a, b;
        if (scanf("%d %d", &a, &b) == EOF)
            break;

        printf("%zu\n", num_digits(a+b));
    }

    return 0;
}