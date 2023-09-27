#include<bits/stdc++.h>2
using namespace std;
#define Max 1000000
int prime[Max],status[Max];
void sieve()
{
    int i,j,sqr;
    for(i=2;i<=Max;i++)
        status[i]=1;
    for(i=4;i<=Max;i+=2)
        status[i]=0;
    sqr=(int)sqrt(Max);
    for(i=3;i<=sqr;i+=2){
        if(status[i]==1){
            for(j=i*i;j<=Max;j+=2*i)
               status[j]=0;
        }
    }
    for(i=2,j=0;i<=Max;i++){
        if(status[i]==1)
            prime[j++]=i;
    }
}
int main()
{
    sieve();
    long long int n,i,j,sq;
    while(scanf("%lld",&n)==1)
    {
        cout<<n<<":";
        sq=(int)sqrt(n)+2;
        for(i=0;prime[i]<=sq;i++){
           if(n%prime[i]==0)
          {
            while(n%prime[i]==0){
                n/=prime[i];
                cout<<" "<<prime[i];
            }
        }
    }
    if(n>1)
        cout<<" "<<n;
    cout<<endl;
    }
    return 0;
}