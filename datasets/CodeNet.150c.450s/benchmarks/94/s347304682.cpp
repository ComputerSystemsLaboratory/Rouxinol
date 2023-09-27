#include <stdio.h>

int bubble_sort(int n, int A[])
{
    int i, j, v;
    int frag = 1;
    int count = 0;

    for (i=0; frag; i++)
    {
        frag = 0;

        for (j=n-1; j>=i+1; j--){
            if (A[j] < A[j-1]){
                // A[j]とA[j-1]をswap
                v = A[j];
                A[j] = A[j-1];
                A[j-1] = v;

                frag = 1;
                count++;
            }
        }
    }
    return count;
}

int main(void)
{
    int i;

    //データの読み取り
    int N;
    scanf("%d", &N);

    int A[N];
    for (i=0; i<N; i++)
        scanf("%d", &A[i]);

    //バブルソートの実行
    int count = bubble_sort(N, A);

    //出力
    for (i=0; i<N-1; i++)
        printf("%d ", A[i]);
    printf("%d\n", A[N-1]);
    printf("%d\n", count);

    return 0;
}
