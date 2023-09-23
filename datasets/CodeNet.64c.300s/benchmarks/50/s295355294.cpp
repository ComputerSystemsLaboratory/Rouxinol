#include <stdio.h>
#include <iostream>
using namespace std;

int BubbleSort(int elem[], int num)
{
    int i, j;
    int tmp;
    int cnt = 0;
    bool flag = false;

    for (i = 0; i < num; i++) {
        flag = false;
        for (j = num - 1; j > i; j--) {
            if (elem[j] < elem[j-1]) {
                swap(elem[j], elem[j-1]);
                ++cnt;
                flag = true;
            }
        }
        if (flag == false) {
            break;
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