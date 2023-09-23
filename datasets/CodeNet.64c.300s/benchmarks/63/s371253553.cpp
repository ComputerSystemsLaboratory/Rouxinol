#include <cstdio>
int gcd(int a,int b)
{
    return b? gcd(b,a%b):a;
}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        int g = gcd(a,b);
        int l = a/g*b;
        printf("%d %d\n",g,l);
    }
}