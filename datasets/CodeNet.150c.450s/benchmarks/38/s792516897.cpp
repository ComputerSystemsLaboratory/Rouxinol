#include <stdio.h>

void judge(int x, int y, int z);
int pow2(int x);

int main(void)
{
    int dataset;
    scanf("%d", &dataset);

    int side1, side2, side3;
    while (dataset--){
        scanf("%d %d %d", &side1, &side2, &side3);
        judge(side1, side2, side3);
    }

    return 0;
}

void judge(int x, int y, int z)
{
    enum {YES, NO} yn;
    if (pow2(x) == pow2(y) + pow2(z)){
        yn = YES;
    } else if (pow2(y) == pow2(z) + pow2(x)){
        yn = YES;
    } else if (pow2(z) == pow2(x) + pow2(y)){
        yn = YES;
    } else {
        yn = NO;
    }

    if (yn == YES){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int pow2(int x)
{
    return x * x;
}