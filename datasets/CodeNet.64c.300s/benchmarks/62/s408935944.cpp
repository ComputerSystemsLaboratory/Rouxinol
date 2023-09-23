#include <iostream>
using namespace std;

int main() {
    int m, n, sum;
    int seq[102][102];
    int a[102];

    cin >> m >> n;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> seq[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    // calculation
    for (int i = 1; i <= m; ++i) {
        sum = 0;
        for (int j = 1; j <= n; ++j) {
            sum += seq[i][j] * a[j];
        }
        cout << sum << endl;
    }
}