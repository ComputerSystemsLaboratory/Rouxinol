// ALDS1_10_B.cpp
// Dynamic Programming - Matrix Chain Multiplication

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
static const int N = 100;
int main()
{
    int n;
    int P[N + 1];
    int m[N + 1][N + 1];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> P[i] >> P[i + 1];
    }

    for (int k = 0; k < n; k++) {
        for (int i = 1; i + k <= n; i++) {
            if (k == 0) m[i][i+k] = 0;
//            else if (k == 1) m[i][i+1] = P[i - 1] * P[i] * P[i + 1];
            else {
                int res = INT_MAX;
                for (int j = 0; j < k; j++) {
                    res  = min(res, m[i][i+j] + m[i+j+1][i+k] + P[i-1] * P[i+j] * P[i+k]);
                }
                m[i][i+k] = res;
            }
        }
    }

    cout << m[1][n] << endl;
    return 0;
}