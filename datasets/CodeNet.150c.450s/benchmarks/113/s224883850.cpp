#include <cstdio>

int main () {
    bool output = true;
    int a;
    int i = 1;
    scanf("%d", &a);
    while (output) {
        printf("Case %d: %d\n", i, a);
        i++;
        scanf("%d", &a);
        if (a == 0) output = false;
    }

    return 0;
}