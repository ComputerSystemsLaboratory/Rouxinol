#include <iostream>
using ll = long long;
using namespace std;


int main() {
    int n, R[200000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &R[i]);
    }
    int maxv = -2000000000;
    int minv = R[0];
    for (int j = 1; j < n; ++j) {
        maxv = max(maxv, R[j]-minv);
        minv = min(minv, R[j]);
    }
    cout << maxv << "\n";
    return 0;
}
