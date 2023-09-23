#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int num[20];
bool dfs(int x, int left, int right)
{
    if(num[x] > left)
    {
        if(x == 9)
            return true;
        if(dfs(x + 1, num[x], right))
            return true;
        return false;
    }
    else if(num[x] > right)
    {
        if(x == 9)
            return true;
        if(dfs(x + 1, left, num[x]))
            return true;
        return false;
    }
    return false;
}
int main()
{
    int T, i;
    scanf("%d", &T);
    while(T--)
    {
        for(i = 0; i < 10; i++)
            scanf("%d", &num[i]);
        if(dfs(0, -1<<30, -1<<30))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}