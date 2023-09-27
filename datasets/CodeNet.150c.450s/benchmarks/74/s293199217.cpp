#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
//#define Nmax 50005
using namespace std;
static const int INF = (1<<29);
static const int Nmax = 50005;
int T[50005];
int main()
{
    int n,m;
    int a[21];
    scanf("%d%d",&n,&m);

    for(int i=1;i<=m;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<=Nmax;i++)
        T[i] = INF;
    //memset(T,-1,sizeof(T));
    T[0] = 0;
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j+a[i]<=n;j++)
        {
            T[j+a[i]] = min(T[j+a[i]],T[j]+1);
        }
    }
    printf("%d\n",T[n]);
    return 0;
}