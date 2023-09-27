#include <iostream>
#include <climits>
using namespace std;
int main() {
    int coin[] = {1,5,10,50,100,500};
    int dp[1000];
    fill_n(dp, 1000, INT_MAX);
    dp[0] = 0;
    for (int i=1; i<1000; ++i) {
        for (int j=0; j<6; ++j) {
            if (i - coin[j] >= 0) {
                dp[i] = min(dp[i], dp[i-coin[j]]+1);
            }
        }
    }

    int n;
    while (cin >> n && n!=0) {
        cout << dp[1000-n] << endl;
    }

    return 0;
}