#include<cstdio>
static const int M_SEC = 60;

int main() {
    int S;

    scanf("%d", &S);
    int h, m, s;
    s = S % M_SEC;
    m = S / M_SEC;
    h = m / M_SEC;
    m %= M_SEC;
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}