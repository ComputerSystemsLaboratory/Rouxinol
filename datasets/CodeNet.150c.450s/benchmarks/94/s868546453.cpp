#include <stdio.h>

int BubbleSort(int elem[], int num)
{
    int i, j;
    int tmp;
    int cnt = 0;

    for (i = 0; i < num; i++) {
        for (j = num - 1; j > i; j--) {
            if (elem[j] < elem[j-1]) {
                tmp       = elem[j-1];
                elem[j-1] = elem[j];
                elem[j]   = tmp;
                ++cnt;
            }
        }
    }

    return cnt;
}

int main(void)
{
    int i;
    int num;
    int elem[100];
    int cnt;

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &elem[i]);
    }

    cnt = BubbleSort(elem, num);

    printf("%d", elem[0]);
    for (i = 1; i < num; i++) {
        printf(" %d", elem[i]);
    }
    printf("\n%d\n", cnt);

    return 0;
}