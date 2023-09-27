#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;

static const int MAX_NUM = 100;

void dsf_cal(int matrix[][MAX_NUM + 1], int state[], int time[][2], int index, int num)
{
    static int t = 1;
    stack<int> S;

    S.push(index);
    state[index]   = 1;
    time[index][0] = t;
    ++t;

    while (S.empty() != true) {
        int i;
        int target = S.top();
        for (i = 1; i < num + 1; i++) {
            if (matrix[target][i] == 1) {
                if (state[i] == 0) {
                    S.push(i);
                    state[i]   = 1;
                    time[i][0] = t;
                    ++t;
                    break;
                }
            }
        }
        if (i == num + 1) {
            time[target][1] = t;
            ++t;
            S.pop();
        }
    }

    return;
}

void DSF(int matrix[][MAX_NUM + 1], int num)
{
    int state[MAX_NUM+1]   = {0};
    int time[MAX_NUM+1][2] = {0};

    for (int i = 1; i < num+1; i++) {
        if (state[i] == 0) {
            dsf_cal(matrix, state, time, i, num);
        }
    }

    for (int i = 1; i < num+1; i++) {
        printf("%d %d %d\n", i, time[i][0], time[i][1]);
    }

    return;
}

int main(void)
{
    int num;
    int index, elemNum, tmp;
    int matrix[MAX_NUM + 1][MAX_NUM + 1] = {0};

    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d %d", &index, &elemNum);
        for (int j = 0; j < elemNum; j++) {
            scanf("%d", &tmp);
            matrix[index][tmp] = 1;
        }
    }

    DSF(matrix, num);

    return 0;
}