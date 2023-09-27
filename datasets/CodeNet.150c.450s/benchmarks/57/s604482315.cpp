#include <cstdio>

using namespace std;

int main() {
    while (true) {
        int a, b;
        char op;
        scanf("%d %c %d", &a, &op, &b);

        switch (op) {
            case '+':
                printf("%d\n", a+b);
                break;
            case '-':
                printf("%d\n", a-b);
                break;
            case '*':
                printf("%d\n", a*b);
                break;
            case '/':
                printf("%d\n", a/b);
                break;
            case '?':
                return 0;
        }
    }
}