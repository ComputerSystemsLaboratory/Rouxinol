#include <iostream>

using namespace std;

const int INF = 1e9;
const int MAX_N = 1e6;
int dp[MAX_N + 1], dp_odd[MAX_N + 1];

void Init()
{
    int nth = 1;
    int tetra = 0;
    for (int i = 1; i <= MAX_N; ++i)
        dp[i] = dp_odd[i] = INF;

    while (tetra <= MAX_N) {
        tetra = (nth * (nth + 1) * (nth + 2)) / 6;
        if (tetra % 2 == 0) {
            for (int i = 0; i + tetra <= MAX_N; ++i)
                dp[i + tetra] = min(dp[i + tetra], dp[i] + 1);
        }
        else {
            for (int i = 0; i + tetra <= MAX_N; ++i) {
                dp[i + tetra] = min(dp[i + tetra], dp[i] + 1);
                dp_odd[i + tetra] = min(dp_odd[i + tetra], dp_odd[i] + 1);
            }
        }

        nth++;
    }
}

int main()
{
    Init();

    int n;
    while (cin >> n, n) {
        cout << dp[n] << " " << dp_odd[n] << endl;
    }

    return 0;
}