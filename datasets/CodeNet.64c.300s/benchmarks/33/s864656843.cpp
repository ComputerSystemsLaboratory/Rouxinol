#include <stdio.h>
 
int main()
{
    while (1) {
        int a, b, sol;
        char op;
        scanf("%d %c %d", &a, &op, &b);
        switch (op) {
        case '?' :
            return 0;
        case '*' :
            sol = a * b;
            break;
        case '/' :
            sol = a / b;
            break;
        case '+' :
            sol = a + b;
            break;
        case '-' :
            sol = a - b;
            break;
        }
        printf("%d\n", sol);
    }
}