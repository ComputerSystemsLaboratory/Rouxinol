#include<stdio.h>
#include<math.h>
#include<cmath>
#include<vector>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define eps 1e-8
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) (a<b?a:b)
#define ll long long
#define INF 9223372036854775807
int prime[1000005];
bool isprime[10000005];
int num;
int main()
{
    for(int i=2;i<1000005;i++)
    {
        if(isprime[i])
            continue;
        prime[num++]=i;
        for(int j=2*i;j<1000005;j+=i)
        {
            isprime[j]=1;
        }
//        if(i<100)
//            printf("%d\n",prime[num-1]);
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int ans=upper_bound(prime,prime+num,n)-prime;
        printf("%d\n",ans);
    }
    return 0;
}