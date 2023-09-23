#include<bits/stdc++.h>
using namespace std;

int isprime(int x)
{
    if(x==2)
      return 1;
    else if(x%2==0)
      return 2;
    for(long long int i =3 ; i <= sqrt(x) ; i+=2)
    {
        if(x%i==0)
            return 2;
    }
    return 1;
}
int main()
{
    long long int  x;
    int n,cnt = 0;
    scanf("%d",&n);
    while(n--)
    {
      scanf("%lld",&x);
      if(isprime(x)==1)
          cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}

