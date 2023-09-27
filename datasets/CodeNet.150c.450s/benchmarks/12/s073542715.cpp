#include <cstdio>
#include <vector>

using namespace std;

int main() {
    size_t H;
    scanf("%zu", &H);

    vector<int> A(H+1);
    for (size_t i=1; i<=H; ++i)
        scanf("%d", &A[i]);

    for (size_t i=1; i<=H; ++i) {
        printf("node %zd: ", i);
        printf("key = %d, ", A[i]);
        if (i>>1)
            printf("parent key = %d, ", A[i>>1]);

        if ((i<<1) <= H)
            printf("left key = %d, ", A[i<<1]);

        if ((i<<1|1) <= H)
            printf("right key = %d, ", A[i<<1|1]);

        printf("\n");
    }

    return 0;
}