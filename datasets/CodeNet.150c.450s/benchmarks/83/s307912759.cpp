#include <iostream>
#include <algorithm>
using namespace std;
int value[100], weight[100], dp[110][10010];
int N, W;
int main()
{
    cin >> N >> W;
    for (int i = 0; i < N; i++)
    {
        cin >> value[i] >> weight[i];
    }
    //初期条件
    for (int w = 0; w <= W; w++)
    {
        dp[0][w] = 0;
    }
    for (int j = 0; j < N; j++)
    {                                //weight
        for (int w = 0; w <= W; w++) //w=Wを含み、初期値w=0も含む
        {                            //component index
            if (w >= weight[j])//入りそう(=含む)
            {
                dp[j + 1][w] = max(dp[j][w - weight[j]] + value[j], dp[j][w]);
            }
            else
            {
                dp[j + 1][w] = dp[j][w];
            }
        }
    }

    cout << dp[N][W] << endl; //行列はN*W

    return 0;
}

/*
漸化式
dp[i+1][w]=
    (w>weight[i])
    dp[i][w-weight[i]]+value[i] or dp[i][w]
    (w>=weight[i])
    dp[i][w]
*/
