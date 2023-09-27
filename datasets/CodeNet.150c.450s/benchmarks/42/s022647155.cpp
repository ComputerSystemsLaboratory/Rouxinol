#include <cstdio>
#include <algorithm>
#define MAX 200000

typedef struct _p
{
    char name[100];
    int time;
} Process;

Process P[MAX];
int n, q, head, tail;

Process dequeue()
{
    Process p = P[head];
    head = (head + 1) % MAX;
    return p;
}

void enqueue(Process p)
{
    P[tail] = p;
    tail = (tail + 1) % MAX;
}

int main()
{
    int elaps = 0; // 時刻
    int t; // 処理時間
    Process u;
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", P[i].name);
        scanf("%d", &P[i].time);
    }
    head = 0;
    tail = n;

    while (head != tail)
    {
        u = dequeue();
        t = std::min(u.time, q);
        elaps += t;
        u.time -= t;

        if (u.time > 0)
        {
            enqueue(u);
        }
        else
        {
            printf("%s %d\n", u.name, elaps);
        }
    }

    return 0;
}

