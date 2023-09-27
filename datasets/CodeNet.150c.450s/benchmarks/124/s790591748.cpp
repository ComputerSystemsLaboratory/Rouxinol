#include <cstdio>
#include <iostream>
using namespace std;

static const int MAX_NUM   = 101;
static const int NIL       = 10000001;
static const int NO_VISIT  = 0;
static const int NOW_VISIT = 1;
static const int END_VISIT = 2;

void SSSP(int *pMatrix, int num)
{
    int i;
    int mincost;
    int target;
    int lcost[MAX_NUM];
    int parent[MAX_NUM];
    int state[MAX_NUM];
    int *pList;

    for (i = 0; i < num; i++) {
        lcost[i]  = NIL;
        parent[i] = -1;
        state[i]  = NO_VISIT;
    }

    lcost[0]  = 0;
    parent[0] = 0;
    state[0]  = NOW_VISIT;

    for (;;) {
        mincost   = NIL;
        for (i = 0; i < num; i++) {
            if ((lcost[i] < mincost) && (state[i] != END_VISIT)) {
                target = i;
                mincost = lcost[i];
            }
        }
        if (mincost == NIL) {
            break;
        }

        state[target] = END_VISIT;
        pList = pMatrix + MAX_NUM * target;
        for (i = 0; i < num; i++) {
            if ((*(pList + i) + lcost[target]) < lcost[i]) {
                lcost[i]  = *(pList + i) + lcost[target];
                state[i]  = NOW_VISIT;
                parent[i] = target;
            }
        }
    }

    for (i = 0; i < num; i++) {
        printf("%d %d\n", i, lcost[i]);
    }

    return;
}

int main(void)
{
    int i, j;
    int num;
    int tmp;
    int target, elem, cost;
    int matrix[MAX_NUM][MAX_NUM];

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
            matrix[i][j] = NIL;
        }
    }

    for (i = 0; i < num; i++) {
        scanf("%d %d", &target, &tmp);
        for (j = 0; j < tmp; j++) {
            scanf("%d %d", &elem, &cost);
            matrix[target][elem] = cost;
        }
    }

    SSSP(&matrix[0][0], num);

    return 0;
}