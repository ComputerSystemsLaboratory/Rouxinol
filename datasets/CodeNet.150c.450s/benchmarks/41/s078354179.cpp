#include <bits/stdc++.h>
using namespace std;
int main()
{
    int V, E;
    cin >> V >> E;
    vector<vector<long long>> dp(V, vector<long long>(V, 1e+15));
    for (int i = 0; i < V; i++)
    {
        dp[i][i] = 0;
    }

    for (int i = 0; i < E; i++)
    {
        int s, t, d;
        cin >> s >> t >> d;
        dp[s][t] = d;
    }
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            for (int k = 0; k < V; k++)
            {
                if(dp[j][i] != 1e+15 && dp[i][k] != 1e+15)
                {
dp[j][k] = min(dp[j][k], dp[j][i] + dp[i][k]);
                }
            }
        }
    }
    for (int i = 0; i < V; i++)
    {
        if (dp[i][i] < 0)
        {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dp[i][j] != 1e+15)
            {
                cout << dp[i][j];
            }
            else
            {
                cout << "INF";
            }
            if (j != V - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
