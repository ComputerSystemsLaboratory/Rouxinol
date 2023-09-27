#include <iostream>

using namespace std;

bool is_prime(int d) {
    for (int i = 2; i * i <= d; i++) {
        if (d % i == 0) { return false; }
    }
    return true;
}

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        if (is_prime(d)) { ans++; }
    }
    cout << ans << endl;
    return 0;
}