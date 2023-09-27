#include <cstdio>
#include <iostream>
using namespace std;

static const int MAX_NUM = 251;

int main(void)
{
    int i;
    int tmp;
    int num;
    int elem[MAX_NUM];

    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        scanf("%d", &elem[i]);
    }

    for (i = 1; i <= num; i++) {
        printf("node %d: key = %d, ", i, elem[i]);
        if (i > 1) {
            printf("parent key = %d, ", elem[i / 2]);
        }
        tmp = i * 2;
        if (tmp <= num) {
            printf("left key = %d, ", elem[tmp]);
        }
        ++tmp;
        if (tmp <= num) {
            printf("right key = %d, ", elem[tmp]);
        }
        printf("\n");
    }

    return 0;
}