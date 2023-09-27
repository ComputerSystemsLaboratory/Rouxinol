#include <cstdio>

bool testcase_ends() {
    int d;
    if (scanf("%d", &d) == EOF)
        return 1;

    auto f=[](int x)->int {
        return x*x;
    };

    int s=0;
    for (int i=0; i<600; i+=d)
        s += d*f(i);

    printf("%d\n", s);
    return 0;
}

int main() {
    int solved=0;
    while (!testcase_ends())
        ++solved;

    return !solved;
}