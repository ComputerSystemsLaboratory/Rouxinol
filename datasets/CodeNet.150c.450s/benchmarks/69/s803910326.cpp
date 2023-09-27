#include<bits/stdc++.h>

using namespace std;
int a[15], f;
void dfs(int x, int y, int step)
{
    if( step == 11)
{
     f = 1;
     return;
}    if(x < a[step]) dfs(a[step], y, step+1);
    else if(y < a[step]) dfs(x, a[step], step+1);
  else
    return ;
}
int main ()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int i;
        f = 0;
        for(i = 1;i <= 10;i++)
            scanf("%d", &a[i]);
            dfs(0, 0, 1);
        if(f)
            printf("YES\n");
        else
            printf("NO\n");
    }
}