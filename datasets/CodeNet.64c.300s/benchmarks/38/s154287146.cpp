#include <iostream>
#include <stdio.h>
using namespace std;

const int M=15;
int s[M];
int f;
void dfs(int step,int na,int nb)
{
    if(f)
        return;
    if(step==11)
    {
        f=1;
        return;
    }
    if(na<s[step-1])
        dfs(step+1,s[step-1],nb);
    if(nb<s[step-1])
        dfs(step+1,na,s[step-1]);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        for(int i=0;i<10;i++)
            scanf("%d",&s[i]);
        f=0;
        dfs(1,-1,-1);
        printf("%s\n",f?"YES":"NO");
    }
    return 0;
}