#include <cstdio>
#define swap(a,b) {a^=b;b^=a;a^=b;}

int main() {
    int a1,a2,a3;
    while(~scanf("%d%d%d", &a1, &a2, &a3)) {
        if (a1 > a2) {
            swap(a1,a2);
        }
        if (a1 > a3) {
            swap(a1,a3);
        }
        if (a2 > a3) {
            swap(a2,a3)
        }
        printf("%d %d %d\n", a1, a2, a3);
    }
    return 0;
}
