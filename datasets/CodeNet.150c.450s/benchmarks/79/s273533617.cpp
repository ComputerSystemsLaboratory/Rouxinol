#include <cstdio>

int main()
{
    int deck[50] = {}, tam[50] = {}, num, times, p, c;

    while (1)
    {
        scanf("%d %d", &num, &times);
        if (num == 0 && times == 0)
        {
            break;
        }
        for (int i = 0; i < num; i++)
        {
            deck[i] = num - i;
        }

        for (int i = 0; i < times; i++)
        {
            scanf("%d %d", &p, &c);
            for (int j = 0; j < p - 1; j++)
            {
                tam[j] = deck[j];
            }
            for (int j = 0; j < c; j++)
            {
                deck[j] = deck[j + p - 1];
            }
            for (int j = 0; j < p - 1; j++)
            {
                deck[c + j] = tam[j];
            }
        }
        printf("%d\n", deck[0]);
    }
}
