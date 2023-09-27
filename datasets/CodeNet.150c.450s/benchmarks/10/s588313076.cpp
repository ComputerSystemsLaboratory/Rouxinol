#include <cstdio>
#include <memory.h>

using namespace std;

int main() {
    char num[4][3][10];
    memset(num, '0', sizeof(num));

    size_t n;
    scanf("%zu", &n);

    for (size_t i=0; i<n; ++i) {
        size_t b, f, r;
        int v;
        scanf("%zu %zu %zu %d", &b, &f, &r, &v);
        --b, --f, --r;

        num[b][f][r] += v;
    }

    for (size_t b=0; b<4; ++b) {
        for (size_t f=0; f<3; ++f) {
            for (size_t r=0; r<10; ++r) {
                printf(" %c", num[b][f][r]);
            }
            printf("\n");
        }
        if (b < 3)
            printf("####################\n");
    }

    return 0;
}