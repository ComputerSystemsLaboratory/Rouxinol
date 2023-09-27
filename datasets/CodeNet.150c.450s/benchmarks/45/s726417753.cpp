#include<cstdio>
#define int long long
int x=1000000007;
//a^b mod x
int mod(int a,int b)
{
    int ans=1;
    for(int i=0;i<30;i++)
    {
        if(b%2==1)ans=ans*a%x;
        a=a*a%x;
        b/=2;
    }
    return ans;
}


signed main()
{
    int m,n;
    scanf("%lld%lld",&m,&n);
    printf("%lld\n",mod(m,n));

    return 0;
}