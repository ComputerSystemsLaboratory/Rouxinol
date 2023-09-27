#include <stdio.h>

int main(void)
{
    int x, y;
    char op;
    while (1) {
        scanf("%d %c %d", &x, &op, &y);
        if (op == '?') {
            break;
        } else if (op == '+') {
            printf("%d\n", x + y);
        } else if (op == '-') {
            printf("%d\n", x - y);
        } else if (op == '*') {
            printf("%d\n", x * y);
        } else if (op == '/') {
            printf("%d\n", x / y);
        }
    }
    return 0;
}