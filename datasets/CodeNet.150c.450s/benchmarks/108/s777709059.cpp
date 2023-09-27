#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

static const int MAX_NUM = 101;

void BFS(int matrix[][MAX_NUM], int num, int target, int result[])
{
    queue<int> Q;
    int  distance = 0;
    char state[MAX_NUM] = {0};

    Q.push(target);
    result[target] = distance;
    state[target] = 1;

    while (Q.empty() == false) {
        int index = Q.front();
        Q.pop();

        for (int i = 1; i < num + 1; i++) {
            if ((matrix[index][i] == 1) && (state[i] == 0)) {
                Q.push(i);
                state[i]  = 1;
                result[i] = result[index] + 1;
            }
        }
    }

    return;
}

int main(void)
{
    int num;
    int index, elemNum, tmp;
    int matrix[MAX_NUM][MAX_NUM] = {0};
    int result[MAX_NUM];

    scanf("%d", &num);
    for (int i = 1; i < num + 1; i++) {
        result[i] = -1;
        scanf("%d %d", &index, &elemNum);
        for (int j = 0; j < elemNum; j++) {
            scanf("%d", &tmp);
            matrix[index][tmp] = 1;
        }
    }

    BFS(matrix, num, 1, result);

    for (int i = 1; i < num + 1; i++) {
        printf("%d %d\n", i, result[i]);
    }

    return 0;
}