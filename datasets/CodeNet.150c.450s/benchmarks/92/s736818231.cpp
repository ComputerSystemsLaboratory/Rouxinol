#include <stdio.h>

int main() {
    int a;
    int b;
    while (scanf("%d %d", &a, &b) != EOF) {
        int result = a + b;
        int digit = 0;
        while (result != 0) {
        digit++;
        result /= 10;
    }

    printf("%d\n", digit);
    }
}