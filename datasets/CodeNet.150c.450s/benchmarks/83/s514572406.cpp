#include<iostream>
#include<vector>

using namespace std;

int dp[10024];

int main()
{

    for(int i = 0; i < 10000; i++)
    {
        dp[i] = -10;
    }

    dp[0] = 0;


    int N, W;
    cin >> N >> W;

    for(int i = 0; i < N; i++)
    {
        int v, w;
        cin >> v >> w;

        for(int j = W - w; j >= 0; j--)
        {
            if(dp[j] != -10 && j + w <= W)
            {
                dp[j + w] = max(dp[j + w], dp[j] + v);
            }
        }

        /*
        for(int j = 0; j <= W; j++)
        {
            cout << dp[j] << " ";
        }
        cout << endl;
        //*/
    }


    int ans = 0;
    for(int i = 0; i <= W; i++)
    {
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    


    return 0;
}