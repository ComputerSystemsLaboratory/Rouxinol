#include<bits/stdc++.h>
using namespace std;
int N,K;
int a[100000];


int main()
{
    while(scanf("%d%d",&N,&K),N||K){
        for(int i=0;i<N;i++)scanf("%d",&a[i]);

        int sum=0;
        for(int i=0;i<K;i++)sum+=a[i];

        int ma=sum;
        for(int i=K;i<N;i++){
            sum-=a[i-K];
            sum+=a[i];
            ma=max(ma,sum);
        }
        printf("%d\n",ma);
    }
    return 0;
}