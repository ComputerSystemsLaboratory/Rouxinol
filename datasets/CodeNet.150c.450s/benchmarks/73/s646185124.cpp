#include <stdio.h>

int n, q, com, x, y, bit[131073];

void add(int i, int x)
{
    while(i <= n)
    {
        bit[i] += x;
        
        i += i & -i;
    }
}

int sum(int i)
{
    int ret = 0;
    
    while(i > 0)
    {
        ret += bit[i];
        
        i -= i & -i;
    }
    
    return ret;
}

int main()
{
    scanf("%d", &n);
    scanf("%d", &q);
    
    for(int i = 0; i < q; i++)
    {
        scanf("%d", &com);
        scanf("%d", &x);
        scanf("%d", &y);
        
        if(com == 0)
        {
            add(x, y);
        }
        else
        {
            printf("%d\n", sum(y) - sum(x - 1));
        }
    }
    
    return 0;
}