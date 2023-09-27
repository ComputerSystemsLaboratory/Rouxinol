#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

int n;
int R[200000];
int M[200000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> R[i];
    }
    M[n - 1] = R[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        M[i] = max(R[i], M[i + 1]);
    }
    int ans = INT_MIN;
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, M[i + 1] - R[i]);
    }
    cout << ans << endl;
    return 0;
}