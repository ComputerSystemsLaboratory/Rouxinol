#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

short dp[1010][1010];

int main(void)
{
    int q;
    cin >> q;
    while (q)
    {
        string X, Y;
        cin >> X >> Y;
        int Xs = X.size(), Ys = Y.size();
        for (int i = 0; i < Xs; i++) dp[i][0] = 0;
        for (int j = 0; j < Ys; j++) dp[0][j] = 0;
        for (int i = 0; i < Xs; i++)
        {
            for (int j = 0; j < Ys; j++)
                dp[i + 1][j + 1] = ((X[i] == Y[j]) ? dp[i][j] + 1 : max(dp[i + 1][j], dp[i][j + 1]));
        }
        cout << dp[Xs][Ys] << endl;
        q--;
    }
    return 0;
}

