#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <vector>
#include <iostream>
using namespace std;
int n;
int a[15],b[15],c[15];
int flag;
void dfs(int i,int j,int x)
{
    if(i + j == 12){
        flag = 1;
        return ;
    }
    if(flag == 1)
        return ;
    if(a[x] > b[i - 1]){
        b[i] = a[x];
        dfs(i + 1,j,x + 1);
    }
    else
    {
        if(a[x] > c[j - 1]){
            c[j] = a[x];
            dfs(i,j + 1,x + 1);
        }
    }
}
int main()
{
    while(~scanf("%d",&n))
    {
        while(n --){
            for(int i = 0; i < 10; i++)
                scanf("%d",&a[i]);
            memset(b,0,sizeof(b));
            memset(c,0,sizeof(c));
            flag = 0;
            dfs(1,1,0);
            if(flag == 1)
                printf("YES\n");
            else
                printf("NO\n");
            /*for(int i = 0; i < 10; i++)
                printf("%d",b[i]);
            //printf("\n\n\n\n");
            /*for(int i = 0; i < 10; i++)
                printf("%d",c[i]);
            printf("\n");*/

        }
    }
    return 0;
}