#include <bits/stdc++.h>
using namespace std;

const int MAX = int(1e6);

int dp[MAX];
int odp[MAX];

int main(void)
{
    int n;

    fill(dp, dp + MAX, MAX);
    fill(odp, odp + MAX, MAX);
    dp[0] = odp[0] = 0;
    for (int i = 0; i < 200; i++){
        int tetra = i * (i + 1) * (i + 2) / 6;
        for (int j = 0; j < MAX - tetra; j++){
            dp[j + tetra] = min(dp[j + tetra], dp[j] + 1);
        }
        if (tetra % 2 == 1){
            for (int j = 0; j < MAX - tetra; j++){
                odp[j + tetra] = min(odp[j + tetra], odp[j] + 1);
            }
        }
    }
    while (cin >> n, n){
        printf("%d %d\n", dp[n], odp[n]);
    }

    return 0;
}