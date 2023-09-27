#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a , b , temp=-1;
    scanf("%lld%lld",&a,&b);
    if(a<b)
      swap(a,b);
    while((a%b)!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    if(temp!=(-1))
      printf("%lld\n",temp);
    else if(a%b==0)
      printf("%lld\n",b);
    return 0;
}

