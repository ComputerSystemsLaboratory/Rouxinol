#include <iostream>

using namespace std;

void append(int t, int n, int table[]) {
    table[t] = 1;
    for (int i=0; i<=n-t; i++) {
        if (table[i] < 0) {
            continue;
        }
        if (table[i+t] < 0) {
            table[i+t] = table[i]+1;
        }
        else {
            table[i+t] = min(table[i]+1, table[i+t]);
        }
    }
}

int main() {
    int n;
    int dp[1000000];
    int dp_odd[1000000];
    for (int i=0; i<1000000; i++) {
        dp[i] = -1;
        dp_odd[i] = -1;
    }
    for (int i=0; true; i++) {
        int t = i*(i+1)*(i+2)/6;
        if (t > 1000000) {
            break;
        }
        append(t, 1000000, dp);
        if (t%2 == 1) {
            append(t, 1000000, dp_odd);
        }
    }
    while (true) {
        cin >> n;
        if (n == 0) {
            return 0;
        }
        cout << dp[n] << ' ' << dp_odd[n] << endl;
    }
}