#include <stdio.h>

void DispArg(int elem[], int num)
{
    int i;

    printf("%d", elem[0]);
    for (i = 1; i < num; i++) {
        printf(" %d", elem[i]);
    }
    printf("\n");

    return;
}

int main(void)
{
    int i, j, k;
    int num;
    int tmp;
    int elem[100];

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &elem[i]);
    }

    DispArg(elem, num);

    for (i = 1; i < num; i++) {
        for (j = i; j > 0; j--) {
            if (elem[j] < elem[j-1]) {
                tmp       = elem[j];
                elem[j]   = elem[j-1];
                elem[j-1] = tmp;
            }
            else {
                break;
            }
        }
        DispArg(elem, num);
    }

    return 0;
}