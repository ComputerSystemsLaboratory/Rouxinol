#include<stdio.h>

using namespace std;


long long int factriolf(long long int n)
{
    long long int f,i;
    f = 1;
    for (i = 1; i<=n;i++)
    {
      f = f *i;
    }
    return f;
}

int main ()
{
    long long int n;
    scanf("%lld",&n);

long long int r = factriolf(n);

printf("%lld\n",r);

return 0;
}