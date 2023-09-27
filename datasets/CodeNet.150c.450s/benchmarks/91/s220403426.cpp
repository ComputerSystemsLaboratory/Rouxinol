#include<cstdio>
#include<cstring>

const int N = 1000009;
int dp[N];
int isprime[N];

int main()
{
    dp[1] = 0;
    for(int i=2;i<N;i++)
    {
        if(!isprime[i])
            for(int j=2*i;j<N;j+=i)
                isprime[j] = 1;
        dp[i] = dp[i-1] + ((isprime[i])?0:1);
    }

    int y;
    while(~scanf("%d",&y))
        printf("%d\n",dp[y]);
    return 0;
}