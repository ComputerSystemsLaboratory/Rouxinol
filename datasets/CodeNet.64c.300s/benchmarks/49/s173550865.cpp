#include<bits/stdc++.h>
using namespace std;

long int a,b,ans,sum;
int main()
{

    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
        ans=0;
        sum=a+b;
        while(1){

        if(sum<10)
        {
            ans=ans+1;
            break;
        }
        ans=ans+1;
        sum=sum/10;
        }
        printf("%ld\n",ans);
    }
}