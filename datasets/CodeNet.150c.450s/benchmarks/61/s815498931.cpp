#include <cstdio>

int main(void)
{

    int N, A, B, C, X;
    int Y[100], k = 0, i;

    while(1){
        scanf("%d %d %d %d %d", &N ,&A, &B, &C, &X);
        if(N == 0 && A == 0 && B == 0 && C == 0 && X == 0)
            break;
        for(i = 0; i < N; i++)
            scanf("%d", Y + i);
        k = 0;
        for(i = 0; i <= 10000; i++){
            if(X == Y[k]){
                k++;
                if(k == N){
                    printf("%d\n", i);
                    break;
                }
            }
            X = (A * X + B) % C;
        }
        if(i == 10001)
            printf("-1\n");
    }
    return 0;
}