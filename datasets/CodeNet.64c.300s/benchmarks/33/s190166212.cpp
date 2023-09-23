#include<cstdio>
int main() {
    int a, b;
    char op;
    while (true) {
        scanf("%d %c %d", &a, &op, &b);
        if (op == '?' )break;
        else if (op == '+')printf("%d\n", a + b);
        else if (op == '-')printf("%d\n", a - b);
        else if (op == '*')printf("%d\n", a * b);
        else if (op == '/')printf("%d\n", a / b);
        else {}
    }
    return 0;
}