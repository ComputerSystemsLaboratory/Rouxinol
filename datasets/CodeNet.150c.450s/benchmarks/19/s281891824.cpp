#include <stdio.h>

void swap(int *X, int *Y)
{
    int Temp = *X;
    *X = *Y;
    *Y = Temp;
}

int main()
{
    for(int i = 0; i < 3000; ++i){
        int X, Y;
        scanf("%d%d", &X, &Y);
        if(X == 0 && Y == 0) return 0;
        if(X > Y) swap(&X, &Y);
        printf("%d %d\n", X, Y);
    }
    return 0;
}
