
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define M 13

void check(bool list[], char c) {
    for (int i = 0; i < M; i++)
    {
        if (!list[i])
        {
            printf("%c %d\n", c, i + 1);
        }
    }
}

int main(void)
{
    int n, j, k;
    char c;

    bool slist[M] = {false};
    bool hlist[M] = {false};
    bool clist[M] = {false};
    bool dlist[M] = {false};

    scanf("%d", &n);
    for (k = 0; k < n; k++)
    {
        getchar();
        scanf("%c %d", &c, &j);
        switch (c) {
            case 'S':
                slist[j - 1] = true;
                break;
            case 'H':
                hlist[j - 1] = true;
                break;
            case 'C':
                clist[j - 1] = true;
                break;
            case 'D':
                dlist[j - 1] = true;
                break;
        }
    }

    check(slist, 'S');
    check(hlist, 'H');
    check(clist, 'C');
    check(dlist, 'D');

    return 0;
}