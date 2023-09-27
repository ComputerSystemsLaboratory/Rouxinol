#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int t[200010];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
        scanf("%d",&t[i]);
    for(int i=1; i<=n-m; i++)
        if(t[i+m]>t[i])
            printf("Yes\n");
        else
            printf("No\n");
    return 0;
}
