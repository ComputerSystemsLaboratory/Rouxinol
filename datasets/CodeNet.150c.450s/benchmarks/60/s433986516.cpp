#include <cstdio>
#include <iostream>
using namespace std;


static const int MAX_NUM = 100 + 1;

int main(void)
{
    int i, j;
    int num;
    int elem;
    int elemnum;
    int tmp;
    int matrix[MAX_NUM][MAX_NUM] = {0};


    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        scanf("%d %d", &elem, &elemnum);
        for (j = 1; j <= elemnum; j++) {
            scanf("%d", &tmp);
            matrix[elem][tmp] = 1;
        }
    }

    for (i = 1; i <= num; i++) {
        printf("%d", matrix[i][1]);
        for (j = 2; j <= num; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}