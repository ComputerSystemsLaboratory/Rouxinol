#include <cstdio>
#include <iostream>

static const int MAX_NUM  = 101;
static const int NO_VISIT  = 0;
static const int NOW_VISIT = 1;
static const int END_VISIT = 2;

void MPT(int *pElem, int num)
{
    int i;
    int mincost;
    int target;
    int parent[MAX_NUM];
    int cost[MAX_NUM];
    int state[MAX_NUM] = {0};
    int *tmp;
    int total = 0;

    for (i = 0; i < num; i++) {
        parent[i] = -1;
        cost[i]   = 0x7FFFFFFF;
    }

    cost[0] = 0;

    for (;;) {
        mincost = 0x7FFFFFFF;
        for (i = 0; i < num; i++) {
            if ((state[i] != END_VISIT) && (mincost > cost[i])) {
                target  = i;
                mincost = cost[i];
            }
        }
        if (mincost == 0x7FFFFFFF) {
            break;
        }

        state[target] = END_VISIT;
        total += mincost;

        tmp = pElem + target * MAX_NUM;
        for (i = 0; i < num; i++) {
            if ((state[i] != END_VISIT) && (*(tmp + i) < cost[i])) {
                cost[i]   = *(tmp + i);
                parent[i] = target;
                state[i]  = NOW_VISIT;
            }
        }
    }

    printf("%d\n", total);

    return;
}

int main(void)
{
    int i, j;
    int num;
    int tmp;
    int elem[MAX_NUM][MAX_NUM];

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
            scanf("%d", &tmp);
            elem[i][j] = (tmp != -1) ? tmp : 0x7FFFFFFF;
        }
    }

    MPT(&elem[0][0], num);

    return 0;
}