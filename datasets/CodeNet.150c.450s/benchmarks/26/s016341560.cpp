#include <stdio.h>
int main() {
    int hoge = 0, ahoge = 0;
    scanf("%d %d", &hoge, &ahoge);
    printf("a %s b\n", hoge < ahoge ? "<" : hoge == ahoge ? "==" : ">");
    return 0;
}

