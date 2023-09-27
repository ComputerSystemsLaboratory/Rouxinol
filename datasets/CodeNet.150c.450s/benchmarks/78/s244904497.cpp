#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

vvi tetra(2);
vvi dp(2, vi(1e6, 1e6));

void preset() {
    int n;
    for (int i=0; (n = i*(i+1)*(i+2)/6) < 1e6; i++) {
        tetra[0].push_back(n);
        if (n % 2 == 1) tetra[1].push_back(n);
    }

    for (int i=0; i<2; i++) {
        dp[i][0] = 0;
        for (int k : tetra[i]) {
            for (int j=k; j<1e6; j++) {
                dp[i][j] = min(dp[i][j], dp[i][j-k]+1);
            }
        }
    }
}

int main() {
    preset();

    int a;
    while (cin >> a) {
        if (a == 0) break;
        cout << dp[0][a] << " " << dp[1][a] << endl;
    }

    return 0;
}