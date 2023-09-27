#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

long long int dp[21][100];
int k[100];
int n;

int main()
{
    cin >> n;
    for(int i=0;i<21;++i)
    {
        for(int j=0;j<100;++j)
        {
            dp[i][j] = 0;
        }
    }
    for(int i=0;i<n;++i)
    {
        cin >> k[i];
    }
    dp[k[0]][0] = 1;
    for(int i=1;i<n-1;++i)
    {
        for(int j=0;j<21;++j)
        {
            if(dp[j][i-1])
            {
                if(j-k[i] >= 0) dp[j-k[i]][i] += dp[j][i-1];
                if(j+k[i] <= 20) dp[j+k[i]][i] += dp[j][i-1];
            }
        }
    }
    cout << dp[k[n-1]][n-2] << endl;
}