#include <algorithm>
#include <iostream>
// #include <vector>

using namespace std;

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

int main(int argc, char *argv[])
{
    int N;
    int W;
    cin >> N;
    cin >> W;
    int vs[N + 1];
    int ws[N + 1];
    for (int i = 0; i < N; i++) {
        cin >> vs[i];
        cin >> ws[i];
    }
    // cout << "N=" << N << endl;
    // cout << "W=" << W << endl;

    int dp[N + 1][W + 1];
    //  0???????´????????????°??????
    for (int j = 0; j < N + 1; j++) {
        dp[j][0] = 0;
    }
    for (int i = 0; i < W + 1; i++) {
        dp[0][i] = 0;
    }

    for (int j = 1; j < N + 1; j++) {
        //  ???????????????????????£
        int v = vs[j - 1];
        int w = ws[j - 1];
        for (int i = 1; i < W + 1; i++) {
            if (i - w >= 0) {
                dp[j][i] = max(dp[j - 1][i], dp[j - 1][i - w] + v);
            }
            else {
                dp[j][i] = dp[j - 1][i];
            }
        }
    }

    // //  for debug
    // for (int j = 0; j < N + 1; j++) {
    //     for (int i = 0; i < W + 1; i++) {
    //         cout << dp[j][i];
    //         cout << ", ";
    //     }
    //     cout << endl;
    // }

    int maxVal = *max_element(&dp[N][0], &dp[N][W + 1]);
    cout << maxVal << endl;
    return 0;
}