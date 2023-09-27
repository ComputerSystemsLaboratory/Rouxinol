#include<bits/stdc++.h>

using namespace std;
int a[15];
int dfs(int x, int y, int step)
{
    if( step == 11)
        return 1;
    if(x < a[step])  return dfs(a[step], y, step+1);
    else if(y < a[step]) return dfs(x, a[step], step+1);
    else
        return 0;
}
int main ()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int i;
        for(i = 1; i <= 10; i++)
            scanf("%d", &a[i]);
        if(dfs(0, 0, 1))
            printf("YES\n");
        else
            printf("NO\n");
    }
}