#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAXN 2000005
#define MAXM 10000

int a[MAXN],b[MAXN];
int c[MAXM+1];
int n;

int main()
{
    scanf("%d",&n);
    memset(c,0,sizeof(c));
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        c[a[i]]++;
    }
    for(int i=1; i<=MAXM; i++)
        c[i]+=c[i-1];
    for(int i=1; i<=n; i++)
    {
        b[c[a[i]]]=a[i];
        c[a[i]]--;
    }
    for(int i=1; i<n; i++)
        printf("%d ",b[i]);
    printf("%d\n",b[n]);
    return 0;
}