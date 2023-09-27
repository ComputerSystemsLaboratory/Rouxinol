#include <iostream>
using namespace std;

int dp[40];

int main(void) {
    int n;
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;
    for (int i = 3; i < 40; i++) {
        dp[i] += (dp[i-1]+dp[i-2]+dp[i-3]);
    }
    while (cin >> n, n) {
        int year = 1;
        while (year*365*10 < dp[n-1]) {
            year++;
        }
        cout << year << endl;
    }

    return 0;
}