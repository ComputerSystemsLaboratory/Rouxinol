#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

static const int MAX_NUM = 105;
static const int NO_VISIT  = 0;
static const int END_VISIT = 2;

void BFS(int *matrix, int num)
{
    int i;
    int state[MAX_NUM]    = {0};
    int distance[MAX_NUM];
    queue<int> Q;
    int target;
    int dist = 0;
    int *tmp;
    bool first;

    for (i = 1; i <= num; i++) {
        distance[i] = -1;
    }

    Q.push(1);
    state[1] = END_VISIT;
    distance[1] = 0;

    while (Q.empty() == false) {
        target = Q.front();
        Q.pop();
        tmp = matrix + target * MAX_NUM;
        first = true;
        for (i = 1; i <= num; i++) {
            if ((*(tmp + i) == 1) && (state[i] == NO_VISIT)) {
                distance[i] = distance[target] + 1;
                Q.push(i);
                state[i] = END_VISIT;
            }
        }
    }

    for (i = 1; i <= num; i++) {
        printf("%d %d\n", i, distance[i]);
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
    int matrix[MAX_NUM][MAX_NUM];

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d %d", &elem, &nume);
        for (j = 0; j < nume; j++) {
            scanf("%d", &tmp);
            matrix[elem][tmp] = 1;
        }
    }

    BFS(&matrix[0][0], num);

    return 0;
}