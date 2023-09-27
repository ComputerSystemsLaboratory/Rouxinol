#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

static const int MAX_NUM  = 2000000;
static const int MAX_ELEM = 10000;

#if 0
void CountSort(int elem[], int num)
{
    int i;
    int cnt[MAX_ELEM] = {0};
    int elem2[MAX_NUM+1];
    int target;

    for (i = 0; i < num; i++) {
        ++cnt[elem[i]];
    }
    for (i = 1; i <= MAX_ELEM; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (i = num - 1; i >= 0; i--) {
        target = elem[i];
        --cnt[target];
        elem2[cnt[target]] = target;
    }

    printf("%d", elem2[0]);
    for (i = 1; i < num; i++) {
        printf(" %d", elem2[i]);
    }
    printf("\n");

    return;
}
#endif

int main(void)
{
    int i;
    int num;
    int cnt[MAX_ELEM+1] = {0};
    int target;
    int *elem1, *elem2;

    scanf("%d", &num);

    elem1 = (int*)malloc(sizeof(int) * num);
    elem2 = (int*)malloc(sizeof(int) * num);

    for (i = 0; i < num; i++) {
        scanf("%d", &elem1[i]);
        ++cnt[elem1[i]];
    }

    for (i = 1; i <= MAX_ELEM; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (i = num - 1; i >= 0; i--) {
        target = elem1[i];
        --cnt[target];
        elem2[cnt[target]] = target;
    }

    printf("%d", elem2[0]);
    for (i = 1; i < num; i++) {
        printf(" %d", elem2[i]);
    }
    printf("\n");

    free(elem1);
    free(elem2);
//    CountSort(elem, num, maxelem);

    return 0;
}