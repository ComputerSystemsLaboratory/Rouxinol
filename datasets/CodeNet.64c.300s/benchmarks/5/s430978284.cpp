#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
long long int a[1000];
int main()
{
    //int i,j;

    for(int i=0;i<10;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+10);

    for(int j=9;j>=7;j--)
    printf("%lld\n",a[j]);
}