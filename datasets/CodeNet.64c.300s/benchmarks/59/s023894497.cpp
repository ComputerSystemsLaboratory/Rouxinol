#include <cstdio>

using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i=2; i*i<=n; ++i)
        if (n%i == 0)
            return false;

    return true;
}

int main() {
    size_t n;
    scanf("%zu", &n);

    int res=0;
    for (size_t i=0; i<n; ++i) {
        int a;
        scanf("%d", &a);

        if (is_prime(a))
            ++res;
    }

    printf("%d\n", res);
    return 0;
}