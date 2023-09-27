#include<bits/stdc++.h>
using namespace std;
int N,K;
int a[100000];

int main()
{
    while(scanf("%d%d",&N,&K),N!=0||K!=0)
    {
        for(int i=0;i<N;i++)scanf("%d",&a[i]);
        int ma=a[0];
        for(int i=1;i<K;i++)ma+=a[i];
        int sum=ma;
        for(int i=K;i<N;i++)
        {
            sum-=a[i-K];
            sum+=a[i];
            if(sum>ma)ma=sum;
        }
        printf("%d\n",ma);
    }
    return 0;
}