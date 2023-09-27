#include <iostream>
#include <utility>
#include <vector>

using namespace std;
typedef pair<int, int> Pii;

int highestWorth(vector<Pii> item, int weight)
{
    int item_len = item.size();

    int dp[item_len][weight + 1];

    for (int i = 0; i < item_len; i++)
    {
        for (int j = 0; j <= weight; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
                continue;
            }

            // アイテムの重さが j 以内であるなら
            if (item[i].second <= j)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - item[i].second] + item[i].first);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[item_len - 1][weight];
}

int main()
{
    int N, W;
    vector<Pii> item;
    cin >> N >> W;

    item.push_back(make_pair(0, 0));

    for (int i = 0; i < N; i++)
    {
        int v_i, w_i;
        cin >> v_i >> w_i;

        item.push_back(make_pair(v_i, w_i));
    }

    cout << highestWorth(item, W) << endl;
}
