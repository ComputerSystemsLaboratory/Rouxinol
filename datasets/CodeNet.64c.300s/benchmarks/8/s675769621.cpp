#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; ++i) {
        if (i%3 == 0) {
            printf(" %d", i);
        } else {
            for (int j=i; j; j/=10)
                if (j%10 == 3) {
                    printf(" %d", i);
                    break;
                }
        }
    }

    printf("\n");
    return 0;
}