
#include <cstdio>

const int MAXN = 15;
int a[MAXN], flag;

void dfs(int p, int b, int c)
{
    if(p == 10)
    {
        flag = 1;
        return;
    }
    if(a[p] > b) dfs(p + 1, a[p], c);
    if(a[p] > c) dfs(p + 1, b, a[p]);
}

int main()
{
    int t;
    while(~scanf("%d", &t))
    {
        while(t--)
        {
            flag = 0;
            for(int i = 0; i < 10; i++)
                scanf("%d", &a[i]);
            dfs(0, 0, 0);
            printf("%s\n", flag ? "YES" : "NO");
        }
    }
    return 0;
}