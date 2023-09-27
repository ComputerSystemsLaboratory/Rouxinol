#include <stdio.h>

int cards[50];
int N,R;

int swap(int p, int c)
{
    int t_cards[50];
    for(int i=0; i < N; i++)
        t_cards[i] = cards[i];
    for(int i=0; i < c; i++)
        cards[i] = cards[p-1+i];
    for(int i=0; i < p-1; i++)
        cards[i+c] = t_cards[i];
    return 0;
}

int main(void)
{
    while(true)
    {
        scanf("%d%d", &N, &R);
        if(N==0 && R==0) break;

        for(int i=0; i < N; i++)
            cards[i] = N-i;

        for(int i=0; i < R; i++)
        {
            int p,c;
            scanf("%d%d", &p, &c);
            swap(p, c);
        }
        printf("%d\n", cards[0]);
    }

    return 0;
}