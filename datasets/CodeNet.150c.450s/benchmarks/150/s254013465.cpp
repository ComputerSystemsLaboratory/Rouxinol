#include <cstdio>
#include <iostream>
using namespace std;
#define maxn 2000005
#define ma 10005
int a[maxn],b[maxn],c[maxn];
void countingSort(int k)
{
    for(int i=1;i<=k;++i)
        c[a[i]]++;
    for(int i=1;i<=ma;++i)
        c[i]=c[i-1]+c[i];
    for(int i=k;i>=1;--i)
    {
        b[c[a[i]]]=a[i];
        c[a[i]]--;
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    countingSort(n);
    for(int i=1;i<=n;i++)
    {
        if(i>1) printf(" ");
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}