#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
const int maxn=50;
int n;
int a[maxn];
int fib(int n)
{
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=n;i++) a[i]=a[i-2]+a[i-1];
    return a[n];
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    printf("%d\n",fib(n));

    return 0;
}