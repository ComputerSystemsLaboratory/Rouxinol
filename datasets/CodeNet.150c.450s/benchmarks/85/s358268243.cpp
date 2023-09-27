#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#define inf pow(100, 4) + 1

int dp[100][100] = {};
int n;
int getMCM(int r[], int c[])
{
    int k;
    for (int i = 1; i < n; i++)
    {
        k = 0;
        for (int j = i; j < n; j++)
        {
            dp[k][j] = inf;
            for (int l = k; l < j; l++)
            {
                dp[k][j] = min(dp[k][j], dp[k][l] + dp[l + 1][j] + r[k] * c[j] * c[l]);
            }
            k++;
        }
    }
    return dp[0][n - 1];
}

int main()
{
    cin >> n;
    int r[n], c[n];
    for (int i = 0; i < n; i++)
        cin >> r[i] >> c[i];

    cout << getMCM(r, c) << "\n";
    return 0;
}
