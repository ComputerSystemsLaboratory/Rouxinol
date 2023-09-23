#include <iostream>

using namespace std;
using LL = long long;

int main() {
    int n;
    cin >> n;
    LL ans = 1;

    for (int i = n; i > 1; i--) {
        ans *= i;
    }

    cout << ans << endl;
}
