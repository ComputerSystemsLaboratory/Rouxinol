#include<bits/stdc++.h>
using namespace std;

int a[10000000];
vector<int> vc;

void sieve()
{
    int i,j;
    a[1]=1;

    vc.push_back(2);

    for(i=4; i<=1000000; i+=2)a[i]=1;
    for(i=3; i<=1000000; i+=2)
    {
        if(a[i]==0)
        {
            for(j=3*i; j<=1000000; j=j+i*2)a[j]=1;
            vc.push_back(i);
        }
    }
}
int main()

{
    sieve();
    int i,j,k,l=0,n;
    scanf("%d",&n);
    printf("%d:",n);
    for(i=0;n!=1&&i<vc.size();i++)
    {
       for(;n%vc[i]==0;)
        {
            printf(" %d",vc[i]);
            n=n/vc[i];
            l++;

        }

    }
    if(l==0)printf(" %d",n);
    printf("\n");
    return 0;
}