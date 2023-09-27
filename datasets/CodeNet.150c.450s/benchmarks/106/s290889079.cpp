#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    int count;
    for (int i = a; i <= b; i++) 
        if (c % i == 0)
            count++;

    printf("%d\n", count);
}