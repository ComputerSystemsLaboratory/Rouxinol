#include <cstdio>
#include <cstdlib>
#include <cstring>

int top, s[1010];

void push(int x)
{
    s[++top] = x;
}

int pop()
{
    top--;
    return s[top+1];
}

int main()
{
    int a, b;
    char buf[100];

    top = 0;
    while (scanf("%s", buf) == 1) {
        switch (buf[0]) {
            case '+' : b = pop(); a = pop(); push(a + b); break;
            case '-' : b = pop(); a = pop(); push(a - b); break;
            case '*' : b = pop(); a = pop(); push(a * b); break;
            default  : push(atoi(buf));
        }
    }
    printf("%d\n", pop());

    return 0;
}