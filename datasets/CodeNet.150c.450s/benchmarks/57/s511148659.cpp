#include <stdio.h>

int main()
{
    char op;
    int a, b;

    while (scanf("%d %c %d", &a, &op, &b) == 3 && op != '?') {
        int val;
        switch (op) {
        case '+': val = a + b; break;
        case '-': val = a - b; break;
        case '*': val = a * b; break;
        case '/': val = a / b; break;
        }
        printf("%d\n", val);
    }
}