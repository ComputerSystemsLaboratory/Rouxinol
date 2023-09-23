#include <cstdio>
#include <cstring>
const int MAX_n = 999999;
bool isPrime[MAX_n+1];
int sum[MAX_n+1];
int main()
{
    memset(isPrime,true,sizeof(isPrime));
    for(int i = 2; 2*i <= MAX_n ; ++i)
        if(isPrime[i])
            for(int j = 2*i; j <= MAX_n; j+=i)
                isPrime[j] = false;
    isPrime[0] = isPrime[1] = false;
    
    for(int i = 0; i < MAX_n; ++i)
        sum[i+1] = sum[i] + isPrime[i+1];
    
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int ans = sum[n];
        printf("%d\n",ans);
    }
    
}