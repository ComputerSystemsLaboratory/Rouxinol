#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;

static const int MAX_NUM = 101;

static const int NO_VISIT  = 0;
static const int NOW_VISIT = 1;
static const int END_VISIT = 2;

void DSF(int* matrix, int num)
{
    int i, j;
    int ttime = 0;
    int stime[MAX_NUM+1] = {0};
    int etime[MAX_NUM+1] = {0};
    int state[MAX_NUM+1] = {0};
    stack<int> S;
    int target, next;
    int *tmp;

    for (j = 1; j <= num; j++) {
    if (state[j] != NO_VISIT) {
        continue;
    }
    S.push(j);
    ++ttime;
    stime[j] = ttime;
    state[j] = NOW_VISIT;

    while (S.empty() == false) {
        target = S.top();
        for (i = 1; i <= num; i++) {
            tmp = matrix + MAX_NUM * target + i;
            if ((*tmp == 1) && (state[i] == NO_VISIT)) {
                *tmp = 2;
                S.push(i);
                ++ttime;
                stime[i] = ttime;
                state[i] = NOW_VISIT;
                break;
            }
        }

        if (i == num + 1) {
            S.pop();
            ++ttime;
            etime[target] = ttime;
            state[target] = END_VISIT;
        }
    }
    }

    for (i = 1; i <= num; i++) {
        printf("%d %d %d\n", i, stime[i], etime[i]);
    }

    return;
}

int main(void)
{
    int i, j;
    int num;
    int elem;
    int nume;
    int tmp;
    int matrix[MAX_NUM][MAX_NUM] = {0};

    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        scanf("%d %d", &elem, &nume);
        for (j = 0; j < nume; j++) {
            scanf("%d", &tmp);
            matrix[elem][tmp] = 1;
        }
    }

    DSF(&matrix[0][0], num);

    return 0;
}