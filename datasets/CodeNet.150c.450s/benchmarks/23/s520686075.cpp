#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n;
    
    scanf("%d", &n);
    
    vector<long long> dp(n + 1);
    
    dp[1] = dp[0] = 1;
    
    for(int i = 2; i <= n ;i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    
    printf("%lld\n", dp[n]);
    
    return 0;
}