#include<stdio.h>
int a[10];
int bstack[10];
int btop;
int cstack[10];
int ctop;
bool dfs(int i)
{
    bool b1=false,b2=false;
    if(i==10)
        return true;
    if(btop==-1 || bstack[btop]<a[i])
    {
        btop++;
        bstack[btop]=a[i];
        i++;
        b1=dfs(i);
        btop--;
    }
    if(ctop==-1 || cstack[ctop]<a[i])
    {
        ctop++;
        cstack[ctop]=a[i];
        i++;
        b2=dfs(i);
        ctop++;
    }
    return b1|b2;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        for(int i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        btop=-1;
        ctop=-1;
        if(dfs(0))
            printf("YES\n");
        else
            printf("NO\n");
    }
}