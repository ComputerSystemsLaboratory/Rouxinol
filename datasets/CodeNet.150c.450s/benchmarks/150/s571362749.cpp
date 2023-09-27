#include<cstdio>
#include <algorithm>
using namespace std;
#define maxn 2000005
int a[maxn];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;++i)
    {
        if(i) printf(" ");
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}